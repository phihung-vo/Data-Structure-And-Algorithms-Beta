//Function For Class
void nhapDSLop(DSLOP *dslop);
void inDSLop();
void insertClass(char maLop[MAX],char tenLop[MAX],DSLOP *dslop);
void Save_SV_File_DSLOP(LOP *lop);

//Function For Monhoc
void nhapDSMon(DSMON *dsmon);
void inDSMon();
void insertObject(char maMon[MAX],char tenMon[MAX],DSMON *ds);

//Function For Student



//Funtion For Question


//Function Work With File
void loaddsltam(DSLOP *dslop);
void savedsltam(DSLOP *dslop);
void loadDSLop(DSLOP *dslop);
void saveDSLop(char maLop[MAX],char  tenLop[MAX],DSLOP *dslop);
void loadDSMon(DSMON *dsmon);
void saveDSMon(char maMon[MAX],char  tenMon[MAX],DSMON *dsmon);

//
void saveClassToFile(DSLOP *dslop);//Khong Dung
void openFileToWriteOnly(FILE &file);//Khong Dung
//Funtion For Services
void backSpace(int x,int y);
//Funtion For Display and Menu
int loginDisplay();
int menu(DSLOP *dslop,DSMON *dsmon,NODECAUHOI *dscauhoi);
void menuDisplay();
void menuDisplayQuanLySinhVien();
void menuDisplayQuanLyCauHoi();
void menuDisplayQuanLyLop();
void menuDisplayQuanLyMonHoc();
int menuQuanLyLop(DSLOP *dslop);
int menuQuanLyMonHoc(DSMON *dsmon);
void displayOuputDSMon(int x,int y);//cai dat vi tri cua danh sach
void displayOuputDSLop(int x,int y);
