#pragma once



// 많은 객체로 이루어진 숲 전체는 1프레임에 GPU로 모두 전달하기에는 양이 너무 많다.
/*
class Tree 
{
private:
	// 줄기, 가지, 잎 형태 폴리곤 메시
	Mesh mesh_;
	// 나무 껍질 텍스처
	Texture bark_;
	// 잎사귀 텍스처
	Texture leaves_;
	// 숲에서 위치와 방향
	Vector position_;
	// 각 나무 크기와 음영 조절
	double height_;
	double thickness_;
	Color barkTint_;
	Color leafTint_;
};
*/

// 숲에 나무가 수천 그루 넘게 있다해도 대부분 비슷해 보인다.
// 모든 나무를 같은 메시와 텍스처로 표현한다. 즉, 나무 객체에 들어 있는 데이터 대부분이 인스턴스 별로 다르지 않다.

class TreeModel
{
private:
	Mesh mesh_;
	Texture bark_;
	Texture leaves_;
};

class Tree
{
private:
	TreeModel* model_;

	Vector position_;
	double height_;
	double thickness_;
	Color barkTint_;
	Color leafTint_;
};