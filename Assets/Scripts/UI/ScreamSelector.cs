using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreamSelector : MonoBehaviour
{
    public List<GameObject> billboards;

    public GameObject ozVersion;
    public GameObject mozVersion;
    public Transform pivot;

    public SpriteRenderer prideSprite;
    public SpriteRenderer prideSpriteActivated;
    public SpriteRenderer curiositySprite;
    public SpriteRenderer curiositySpriteActivated;
    public SpriteRenderer joySprite;
    public SpriteRenderer joySpriteActivated;
    public SpriteRenderer corneredSprite;
    public SpriteRenderer corneredSpriteActivated;
    public SpriteRenderer solitudeSprite;
    public SpriteRenderer solitudeSpriteActivated;
    public SpriteRenderer sadnessSprite;
    public SpriteRenderer sadnessSpriteActivated;
    public SpriteRenderer ozBbackgroundSprite;
    public SpriteRenderer mozBackgroundSprite;

    public float topHeight;
    public float backHeight;

    private Quaternion currentRotation = Quaternion.identity;
    private int selectedScream;
    private bool visible;
    private int visibleCoroutines;

    void Update()
    {
        foreach (GameObject billboard in billboards)
        {
            billboard.transform.rotation = Quaternion.Euler(0, 0, 0);
        }

        pivot.rotation = Quaternion.Lerp(pivot.rotation, currentRotation, Time.deltaTime * 5f);

        if (visible)
        {
            prideSprite.color = Color.Lerp(prideSprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            prideSpriteActivated.color = Color.Lerp(prideSpriteActivated.color, Color.white, 5 * Time.deltaTime);
            curiositySprite.color = Color.Lerp(curiositySprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            curiositySpriteActivated.color = Color.Lerp(curiositySpriteActivated.color, Color.white, 5 * Time.deltaTime);
            joySprite.color = Color.Lerp(joySprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            joySpriteActivated.color = Color.Lerp(joySpriteActivated.color, Color.white, 5 * Time.deltaTime);
            corneredSprite.color = Color.Lerp(corneredSprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            corneredSpriteActivated.color = Color.Lerp(corneredSpriteActivated.color, Color.black, 5 * Time.deltaTime);
            solitudeSprite.color = Color.Lerp(solitudeSprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            solitudeSpriteActivated.color = Color.Lerp(solitudeSpriteActivated.color, Color.black, 5 * Time.deltaTime);
            sadnessSprite.color = Color.Lerp(sadnessSprite.color, new Color(0.5f, 0.5f, 0.5f, 0.5f), 5 * Time.deltaTime);
            sadnessSpriteActivated.color = Color.Lerp(sadnessSpriteActivated.color, Color.black, 5 * Time.deltaTime);
            ozBbackgroundSprite.color = Color.Lerp(ozBbackgroundSprite.color, Color.black, 5 * Time.deltaTime);
            mozBackgroundSprite.color = Color.Lerp(mozBackgroundSprite.color, Color.black, 5 * Time.deltaTime);
        }
        else
        {
            prideSprite.color = Color.Lerp(prideSprite.color, Color.clear, 5 * Time.deltaTime);
            prideSpriteActivated.color = Color.Lerp(prideSpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            curiositySprite.color = Color.Lerp(curiositySprite.color, Color.clear, 5 * Time.deltaTime);
            curiositySpriteActivated.color = Color.Lerp(curiositySpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            joySprite.color = Color.Lerp(joySprite.color, Color.clear, 5 * Time.deltaTime);
            joySpriteActivated.color = Color.Lerp(joySpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            corneredSprite.color = Color.Lerp(corneredSprite.color, Color.clear, 5 * Time.deltaTime);
            corneredSpriteActivated.color = Color.Lerp(corneredSpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            solitudeSprite.color = Color.Lerp(solitudeSprite.color, Color.clear, 5 * Time.deltaTime);
            solitudeSpriteActivated.color = Color.Lerp(solitudeSpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            sadnessSprite.color = Color.Lerp(sadnessSprite.color, Color.clear, 5 * Time.deltaTime);
            sadnessSpriteActivated.color = Color.Lerp(sadnessSpriteActivated.color, Color.clear, 5 * Time.deltaTime);
            ozBbackgroundSprite.color = Color.Lerp(ozBbackgroundSprite.color, Color.clear, 5 * Time.deltaTime);
            mozBackgroundSprite.color = Color.Lerp(mozBackgroundSprite.color, Color.clear, 5 * Time.deltaTime);
        }
    }

    public void SetVisible(bool visible)
    {
        this.visible = visible;
        StartCoroutine(WaitToHide());
    }

    private IEnumerator WaitToHide()
    {
        visibleCoroutines++;
        yield return new WaitForSeconds(4);
        visibleCoroutines--;

        if (visibleCoroutines == 0)
        {
            this.visible = false;
        }
    }

    public void TurnToRight()
    {
        selectedScream++;

        if (selectedScream > 2)
        {
            selectedScream = 0;
        }

        currentRotation = Quaternion.AngleAxis(120 * selectedScream, Vector3.forward);
    }

    public void TurnToLeft()
    {
        selectedScream--;
        if (selectedScream < 0)
        {
            selectedScream = 2;
        }
        currentRotation = Quaternion.AngleAxis(120 * selectedScream, Vector3.forward);
    }

    public void SwitchToOz()
    {
        ozVersion.SetActive(true);
        mozVersion.SetActive(false);
        ozBbackgroundSprite.enabled = true;
        mozBackgroundSprite.enabled = false;
    }

    public void SwitchToMoz()
    {
        ozVersion.SetActive(false);
        mozVersion.SetActive(true);
        ozBbackgroundSprite.enabled = false;
        mozBackgroundSprite.enabled = true;
    }

    public void ActivePrideAndCornered(bool activated)
    {
        if (activated)
        {
            prideSprite.enabled = false;
            prideSpriteActivated.enabled = true;
            corneredSprite.enabled = false;
            corneredSpriteActivated.enabled = true;
        }
        else
        {
            prideSprite.enabled = true;
            prideSpriteActivated.enabled = false;
            corneredSprite.enabled = true;
            corneredSpriteActivated.enabled = false;
        }
    }

    public void ActiveCuriosityAndSolitude(bool activated)
    {
        if (activated)
        {
            curiositySprite.enabled = false;
            curiositySpriteActivated.enabled = true;
            solitudeSprite.enabled = false;
            solitudeSpriteActivated.enabled = true;
        }
        else
        {
            curiositySprite.enabled = true;
            curiositySpriteActivated.enabled = false;
            solitudeSprite.enabled = true;
            solitudeSpriteActivated.enabled = false;
        }
    }

    public void ActiveJoyAndSadness(bool activated)
    {
        if (activated)
        {
            joySprite.enabled = false;
            joySpriteActivated.enabled = true;
            sadnessSprite.enabled = false;
            sadnessSpriteActivated.enabled = true;
        }
        else
        {
            joySprite.enabled = true;
            joySpriteActivated.enabled = false;
            sadnessSprite.enabled = true;
            sadnessSpriteActivated.enabled = false;
        }
    }

    public void MoveToTop()
    {
        transform.localPosition = new Vector3(transform.localPosition.x, topHeight, transform.localPosition.z);
    }

    public void MoveToBack()
    {
        transform.localPosition = new Vector3(transform.localPosition.x, backHeight, transform.localPosition.z);
    }

    public int GetSelectedScream()
    {
        return selectedScream;
    }

}
