#pragma once
#include <Matrix4x4.h>
#include <Vector3.h>

class Matrix
{
private:


public:

	Matrix();
	/// <summary>
	/// 1.平行移動行列
	/// </summary>
	/// <param name="translate">トランスレート</param>
	/// <returns></returns>
	Matrix4x4 MakeTranslateMatrix(const Vector3& translate);
	/// <summary>
	/// 2.拡大縮小行列
	/// </summary>
	/// <param name="scale">大きさ</param>
	/// <returns></returns>
	Matrix4x4 MakeScaleMatrix(const Vector3& scale);
	/// <summary>
	/// 3.座標変換
	/// </summary>
	/// <param name="vector">ベクトル</param>
	/// <param name="matrix">行列</param>
	/// <returns></returns>
	Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);
	
};

