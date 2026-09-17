#pragma once
#include "Engine\\GameObject.h"
class Tank :
    public GameObject
{
public:
    Tank(GameObject* parent);
    ~Tank();
    void Initialize()override;
    void Update()override;
    void Draw()override;
    void Release()override;
private:
    int  hModel_;
    int camType_;//ƒJƒƒ‰‚Ìí—Ş
    void SetFixedCam(); //ŒÅ’èƒJƒƒ‰‚Ìˆ—
};

