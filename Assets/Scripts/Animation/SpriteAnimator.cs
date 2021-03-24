using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteAnimator : MonoBehaviour
{
    public SpriteRenderer spriteRenderer;
    public float speed;
    private bool animated;
    private float alpha;

    private void Update()
    {
        if (animated && spriteRenderer)
        {
            if (alpha < 1)
                alpha += speed * Time.deltaTime;
            
            spriteRenderer.color = spriteRenderer.color * (1 - alpha) + Color.clear * alpha;
        }
    }

    public void Animate()
    {
        this.animated = true;
    }
}
