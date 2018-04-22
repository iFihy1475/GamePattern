#pragma once



// ���� ��ü�� �̷���� �� ��ü�� 1�����ӿ� GPU�� ��� �����ϱ⿡�� ���� �ʹ� ����.
/*
class Tree 
{
private:
	// �ٱ�, ����, �� ���� ������ �޽�
	Mesh mesh_;
	// ���� ���� �ؽ�ó
	Texture bark_;
	// �ٻ�� �ؽ�ó
	Texture leaves_;
	// ������ ��ġ�� ����
	Vector position_;
	// �� ���� ũ��� ���� ����
	double height_;
	double thickness_;
	Color barkTint_;
	Color leafTint_;
};
*/

// ���� ������ ��õ �׷� �Ѱ� �ִ��ص� ��κ� ����� ���δ�.
// ��� ������ ���� �޽ÿ� �ؽ�ó�� ǥ���Ѵ�. ��, ���� ��ü�� ��� �ִ� ������ ��κ��� �ν��Ͻ� ���� �ٸ��� �ʴ�.

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