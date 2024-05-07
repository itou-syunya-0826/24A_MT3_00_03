#include "Matrix.h"
#include <cassert>

Matrix::Matrix() {}

Matrix4x4 Matrix::MakeTranslateMatrix(const Vector3& translate)
{

	Matrix4x4 result = 
	{
		1,0,0,0,
		0,1,0,0,
		0,0,1,0,
		translate.x,translate.y,translate.z,1
	};

	return result;

}

Matrix4x4 Matrix::MakeScaleMatrix(const Vector3& scale)
{

	Matrix4x4 result = 
	{   
	    scale.x,0,0,0,
		0,scale.y,0,0,
		0,0,scale.z,0,
		0,0,0,1
	};

	return result;
}

Vector3 Matrix::Transform(const Vector3& vector, const Matrix4x4& matrix)
{

	Vector3 tranceform = {};
	tranceform.x = vector.x * matrix.m[0][0] + vector.y * matrix.m[1][0] + vector.z * matrix.m[2][0] + 1.0f * matrix.m[3][0];
	tranceform.y = vector.x * matrix.m[0][1] + vector.y * matrix.m[1][1] + vector.z * matrix.m[2][1] + 1.0f * matrix.m[3][1];
	tranceform.z = vector.x * matrix.m[0][2] + vector.y * matrix.m[1][2] + vector.z * matrix.m[2][2] + 1.0f * matrix.m[3][2];
	float w = vector.x * matrix.m[0][3] + vector.y * matrix.m[1][3] + vector.z * matrix.m[2][3] + 1.0f * matrix.m[3][3];
	assert(w != 0.0f);
	tranceform.x /= w;
	tranceform.y /= w;
	tranceform.z /= w;
	return tranceform;

}


