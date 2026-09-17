#include "TitleScene.h"
#include "Engine/Image.h"
#include "Engine/Input.h"
#include "Engine/sceneManager.h"

TitleScene::TitleScene(GameObject* parent)
    : GameObject(parent, "TitleScene")
{
}

TitleScene::~TitleScene()
{
}

void TitleScene::Initialize()
{
    hImage_ = Image::Load("Title.png");
    if (hImage_ < 0)
    {
        return;
    }

    // 画面中央に配置
    transform_.position_ = { 0.0f, 0.0f, 0.0f };
    transform_.rotate_ = { 0.0f, 0.0f, 0.0f };
    transform_.scale_ = { 1.0f, 1.0f, 1.0f };

    Image::SetTransform(hImage_, transform_);
}


void TitleScene::Update()
{
    // Enterキーを押したらゲーム開始
    if (Input::IsKey(DIK_RETURN))
    {
        SceneManager* pSceneManager =
            (SceneManager*)FindObject("SceneManager");

        pSceneManager->ChangeScene(SCENE_ID_PLAY);
    }
}

void TitleScene::Draw()
{
    if (hImage_ >= 0)
    {
        Image::Draw(hImage_);
    }
}

void TitleScene::Release()
{
}