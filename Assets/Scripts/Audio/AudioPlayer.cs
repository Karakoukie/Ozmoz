using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Random = UnityEngine.Random;

[RequireComponent(typeof(AudioSource))]
public class AudioPlayer : MonoBehaviour
{
    public AudioClip[] clips;
    public bool randomizePitch = false;
    public float pitchRandomRange = 0.2f;
    public float playDelay = 0;
    public bool playOnStart = false;
    public bool loop = false;

    [HideInInspector]
    public bool playing;
    [HideInInspector]
    public bool canPlay;

    protected AudioSource m_Audiosource;

    public AudioSource audioSource { get { return m_Audiosource; } }
    public AudioClip clip { get; private set; }

    void Start()
    {
        m_Audiosource = GetComponent<AudioSource>();

        if (playOnStart)
        {
            PlayRandomClip();
        }
    }

    private void Update()
    {
        // For Events
        if (playing)
        {
            if (!m_Audiosource.isPlaying || !loop)
            {
                PlayRandomClip();
            }

            if (!loop)
            {
                playing = false;
            }

            if (loop)
            {
                m_Audiosource.volume = Mathf.Lerp(m_Audiosource.volume, 1f, Time.deltaTime * 5);
            }
        }
        else if (loop)
        {
            m_Audiosource.volume = Mathf.Lerp(m_Audiosource.volume, 0f, Time.deltaTime * 5);
        }

        m_Audiosource.loop = loop;
    }

    public void PlayRandomClip()
    {
        if (clips == null || clips.Length == 0)
            return;

        clip = clips[Random.Range(0, clips.Length)];

        if (clip == null)
            return;

        m_Audiosource.pitch = randomizePitch ? Random.Range(1.0f - pitchRandomRange, 1.0f + pitchRandomRange) : 1.0f;
        m_Audiosource.clip = clip;
        m_Audiosource.PlayDelayed(playDelay);
    }

    public void Play()
    {
        playing = true;
    }

    public void Stop()
    {
        playing = false;
    }

}
