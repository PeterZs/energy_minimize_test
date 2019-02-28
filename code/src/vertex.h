#ifndef _VERTEX_
#define _VERTEX_

#include <math.h>
#include "myvector.h"
class vertex
{
public:
	myvector location;
	myvector normal;
	int index_HE_towards; //ָ���һ��halfedge������
	double area_mixed; //one ring ��Ļ�������������

        int isBoundaryPoint; //�ǲ��Ǳ߽�㣨����ı߽��ָ���ǰ����������ı߽��ͱ��̶��ĵ㣩
        int rankOfInside; //���ڲ��Ǳ߽��ĵ㡡���ڲ���������
        int rankOfOutside; //�����Ǳ߽��ĵ㡡���ⲿ��������

        int FixedOrRealBoundary; //�����Ǳ��̶��ĵ㻹�������ı߽��ϵĵ�

	vertex();
	vertex(myvector location);
	~vertex();
};

#endif
