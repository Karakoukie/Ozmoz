using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Camera))]
public class FlipCamera : MonoBehaviour
{
    public bool flipped;
    private Camera m_camera;

    private void Awake()
    {
        m_camera = GetComponent<Camera>();
    }

    void OnPreCull()
    {
        m_camera.ResetWorldToCameraMatrix();
        m_camera.ResetProjectionMatrix();

        if (flipped)
        {
            m_camera.projectionMatrix *= Matrix4x4.Scale(new Vector3(1, -1, 1));
        }
    }

    void OnPreRender()
    {
        GL.invertCulling = flipped;
    }

    void OnPostRender()
    {
        GL.invertCulling = false;
    }

    public void SetFlipped(bool flipped)
    {
        this.flipped = flipped;
    }

}