#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"function.cpp"
#include"functionOfFile.cpp"

int main() {
    NODESINHVIEN dssinhvien; SINHVIEN sv;
    DSLOP dslop;
    DSMON dsmon;
    NODECAUHOI dscauhoi;
    loadDSLop(&dslop);
    
        
    
      
    Input_SV(&dslop);
//		loaddsltam(&dslop);
//    indsltam();
//    Tim_Kiem_SV(dslop);
//	inDSLop();



//	InitDSSV(dssinhvien);
//	dssinhvien=Input_DSSVtemp();
//	Traverse_DSSV(dssinhvien); 
//	Load_File_DSSV();
	return 0;
}
