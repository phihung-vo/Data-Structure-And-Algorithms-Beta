#include "define.h"

using namespace std;

//-----------------------DS MON HOC------------------------
typedef struct
{
	char mamh[MAXMMH];
	char tenmh[MAXTMH];
}MON;

typedef struct
{
  MON *dsmon[MAXOBJECT];
  int n;
}DSMON;
//----------------------NODE DIEM THI---------------------------
typedef struct
{
	char mamh[MAXMMH];
	float diem;

}DIEM;

struct nodediem
{
	DIEM diemthi;
	struct nodediem *next;
	
}; typedef struct nodediem *NODEDIEM;
//--------------NODE SINH VIEN------------------------
typedef struct
{
	char masv[MAXMSV];//primary key
	char ho[MAXHOSV];
	char ten[MAXTENSV];
	char phai[MAXPHAI];
	char password[MAXPW];
	NODEDIEM	dsdiem;
}SINHVIEN;

struct nodesinhvien
{
	SINHVIEN sinhvien;
	struct nodesinhvien *next;
}; typedef struct nodesinhvien *NODESINHVIEN;
//------------------DS LOP HOC--------------------------
typedef struct
{
	char malop[MAXML]; //primary key
	char tenlop[MAXTL];
	char  nienkhoa[MAXNK];
	NODESINHVIEN dssinhvien;
}LOP;
typedef struct
{
	int n = 0;
	LOP *lop[MAXCLASS];
}DSLOP;
//--------------------DS CAU HOI --------------------------
typedef struct
{
	int id; //primary key
	char mamh[MAXMMH];
	char nd[MAX_CONTENT_QUESTION];
	char a[MAX_CONTENT_ANSWER];
	char b[MAX_CONTENT_ANSWER];
	char c[MAX_CONTENT_ANSWER];
	char d[MAX_CONTENT_ANSWER];
	char da;
}CAUHOI;

struct nodecauhoi
{
	CAUHOI cauhoi;
	//int key;key la idcauhoi
	struct nodecauhoi *left;
	struct nodecauhoi *right;
}; typedef struct nodecauhoi *NODECAUHOI;


//--------------------------DS bai kiem tra chi tiet cua SV------------------

typedef struct
{
	int chose[MAX],arr[MAX],slcauhoi;
	DIEM diems;
}detail;


//in khung ra man hinh
typedef struct
{
	int x;
	int y;
	int maxX;
	int maxY;
}OBJECR_LCT;
