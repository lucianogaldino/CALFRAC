# include <stdio.h>
# include <stdlib.h>
# include<string.h>
# include <math.h>
# define MAX 100
# define TAMANHO_NOME 20
int main (){
  int i,ii,j,jj,k,l,m,n,nn,nnn,p,pp,q,r,rr,rrr,rrrr,rrrrr,s,ss,v,vv,vvv,vvvv,x,xx,yy,z,zz,w,ww,www,wwww,wwwww,wwwwww,resposta,opcao,opcao1,cont;
  float G1,G2,G3,G4,det,det1,M,deta,det1a,t,u,gi,Fi,Pi,Di,Dg,Errorel,inicial,err,Erro,ErroTotal,EP,CL,F1,F2,F3,F4,F5,F6,F7,F8,F9,F10,F11,F12,F13,F14,F15,F16,F17,F18,F19,ML;
  float inca,incb,incbba,incc,incd,ince,incf,incg,inch,inchha,inci,incj,incja,inck,incl,incm,incn,inco,incp,incq,incqa,incr,incs,inct,incu,incv,incx,incz,incw,incy,incaa,incbb,inccc,incdd,incee,incff,incgg,inchh,incii,incjj,inckk,incll,incmm,incnn,incoo,incpp,incqq;  /*variáveis para propagação de incertezas*/
  float cum[MAX],soma[MAX],a[MAX],aa[MAX],b[MAX],c[MAX],d[MAX],e[MAX],solliq[MAX],oliv[MAX],mine[MAX],mine1[MAX],mine2[MAX],mine3[MAX],mine4[MAX],mine5[MAX],mine6[MAX],mine7[MAX],liq[MAX],pivo[MAX];
  float INC[MAX],INCA[MAX],INCAA[MAX],INCB[MAX],INCBB[MAX],INCBBA[MAX],INCC[MAX],INCD[MAX],INCDD[MAX],INCEE[MAX],INCE[MAX],INCER[MAX],INCF[MAX],INCG[MAX],INCH[MAX],INCI[MAX],INCJ[MAX],INCJA[MAX],INCK[MAX],INCL[MAX],INCM[MAX],INCMIN[MAX],INCN[MAX],INCO[MAX],INCP[MAX],INCQ[MAX],INCR[MAX],INCS[MAX],INCT[MAX],INCU[MAX],INCV[MAX]; /*Vetores para propagação de incertezas*/
  float v1[MAX],v2[MAX],v3[MAX],v4[MAX],v5[MAX],v6[MAX],v7[MAX],v8[MAX],v9[MAX],v10[MAX],v11[MAX],v12[MAX],v13[MAX],v14[MAX],v15[MAX],v16[MAX],v17[MAX],v18[MAX],v19[MAX],v20[MAX],v21[MAX],v22[MAX],v23[MAX],v24[MAX],v25[MAX],v26[MAX],v27[MAX],v28[MAX],v29[MAX],v30[MAX],v31[MAX],v32[MAX],v33[MAX],v34[MAX],v35[MAX],v36[MAX],v37[MAX],v38[MAX],v39[MAX],v40[MAX],v41[MAX],v42[MAX],v43[MAX],v44[MAX],v45[MAX],v46[MAX],v47[MAX],v48[MAX],v49[MAX],v50[MAX],v51[MAX],v52[MAX],v53[MAX],v54[MAX],v55[MAX],v56[MAX],v57[MAX],v58[MAX],v59[MAX],v60[MAX]; /*vetores para cálculos*/
  float v1a[MAX],v2a[MAX],v3a[MAX],v4a[MAX],v5a[MAX],v6a[MAX],v7a[MAX],v8a[MAX],v9a[MAX],v10a[MAX],v11a[MAX],v12a[MAX],v13a[MAX],v14a[MAX],v15a[MAX],v16a[MAX],v17a[MAX],v18a[MAX],v19a[MAX],v20a[MAX],v26a[MAX],v27a[MAX],v28a[MAX],v29a[MAX],v30a[MAX],v31a[MAX],v32a[MAX],v37a[MAX],v38a[MAX],v39a[MAX],v40a[MAX],v41a[MAX],v42a[MAX],v47a[MAX],v48a[MAX],v49a[MAX],v50a[MAX],v51a[MAX],v52a[MAX],v53a[MAX],v54a[MAX],v55a[MAX],v56a[MAX],v65a[MAX],v66a[MAX],v67a[MAX],v68a[MAX],v69a[MAX],v70a[MAX],v71a[MAX],v72a[MAX],v93a[MAX],v94a[MAX],v95a[MAX],v96a[MAX],v97a[MAX],v98a[MAX],v122a[MAX],v123a[MAX],v124a[MAX],v125a[MAX],v126a[MAX],v127a[MAX],v128a[MAX]; /*vetores para incertezas*/
  float v61[MAX],v62[MAX],v63[MAX],v64[MAX],v65[MAX],v66[MAX],v67[MAX],v68[MAX],v69[MAX],v70[MAX],v71[MAX],v72[MAX],v73[MAX],v74[MAX],v75[MAX],v76[MAX],v77[MAX],v78[MAX],v79[MAX],v80[MAX],v81[MAX],v82[MAX],v83[MAX],v84[MAX],v85[MAX],v86[MAX],v87[MAX],v88[MAX],v89[MAX],v90[MAX],v91[MAX],v92[MAX],v93[MAX],v94[MAX],v95[MAX],v96[MAX],v97[MAX],v98[MAX],v99[MAX],v100[MAX],v101[MAX],v102[MAX],v103[MAX],v104[MAX],v105[MAX],v106[MAX],v107[MAX],v108[MAX],v109[MAX],v110[MAX],v111[MAX],v112[MAX],v113[MAX],v114[MAX],v115[MAX],v116[MAX],v117[MAX],v118[MAX],v119[MAX],v120[MAX],v121[MAX],v122[MAX],v123[MAX],v124[MAX],v125[MAX],v126[MAX],v127[MAX],v128[MAX],Dii[MAX],Erroi[MAX]; /*vetores para cálculos*/
  float A[MAX][MAX],Aa[MAX][MAX],B[MAX][MAX],Bi[MAX][MAX],Bii[MAX][MAX],Bn[MAX][MAX],Bnor[MAX][MAX],C[MAX][MAX],D[MAX][MAX],Da[MAX][MAX],Db[MAX][MAX],Dc[MAX][MAX],Dd[MAX][MAX],De[MAX][MAX],Df[MAX][MAX],Dh[MAX][MAX],E[MAX][MAX],F[MAX][MAX],G[MAX][MAX],H[MAX][MAX],I[MAX][MAX],Ia[MAX][MAX],Ib[MAX][MAX],Ic[MAX][MAX],Id[MAX][MAX],Ie[MAX][MAX],If[MAX][MAX],J[MAX][MAX],T[MAX][MAX],Ti[MAX][MAX],Tii[MAX][MAX],BAS[MAX][MAX],BASi[MAX][MAX],AC[MAX][MAX],ACi[MAX][MAX];       
  FILE *arq_entrada1;
  FILE *arq_entrada2;
  FILE *arq_entrada3;
  FILE *arq_entrada4;
  FILE *arq_entrada5;
  FILE *arq_entrada6;
  FILE *arq_saida;
  char str_oxido[MAX][MAX],str_amos[MAX][MAX],str_amost[MAX][MAX],str_mine[MAX][MAX],str_minen[MAX][MAX],str_basica[MAX][MAX],str_acida[MAX][MAX],str_traco[MAX][MAX],y[MAX]; 
  char nome_file_entrada1[TAMANHO_NOME];
  char nome_file_entrada2[TAMANHO_NOME];
  char nome_file_entrada3[TAMANHO_NOME];
  char nome_file_entrada4[TAMANHO_NOME];
  char nome_file_entrada5[TAMANHO_NOME];
  char nome_file_entrada6[TAMANHO_NOME];
  char nome_file_saida[TAMANHO_NOME];
  
  printf("Digite 1 para magmatismo generico ou 2 para magmatismo da PMP: ");
  scanf("%d", &opcao);
  printf("Digite 1 para estudo com tracos e maiores ou 2 para estudo somente com maiores:"); 
  scanf("%d", &opcao1);
  /*****   CÁLCULO PARA PMP   *****/
  
if (opcao==2){
  printf("Arquivo das amostras: ");
  scanf("%s", nome_file_entrada1);
  printf("Arquivo das fases minerais: ");
  scanf("%s", nome_file_entrada2);
  if (opcao1==1){
  printf("Arquivo dos elementos tracos: ");
  scanf("%s", nome_file_entrada3);
  printf("Arquivo do coef. particao rochas basicas e intermediarias: ");
  scanf("%s", nome_file_entrada4);
  printf("Arquivo do coef. de particao de rochas acidas: ");
  scanf("%s", nome_file_entrada5);
  }
  printf("Arquivo de saida: ");
  scanf("%s", nome_file_saida);
  printf("Minimo da Media dos Erros Relativos: ");
  scanf("%f", &t);
  printf("Maximo da Media dos Erros Relativos: ");
  scanf("%f", &u);
  printf("Numero de amostras: ");
  scanf("%d", &n);
  if (opcao1==1){
  printf("Numero de elementos-traco: ");
  scanf("%d", &nn);
  }
  printf("Minimo de MgO para G1 (%%): ");
  scanf("%f", &G1);
  printf("Minimo de MgO para G2 (%%): ");
  scanf("%f", &G2);
  printf("Minimo de MgO para G3 (%%): ");
  scanf("%f", &G3);
  printf("Minimo de MgO para G4 (%%): ");
  scanf("%f", &G4);
  printf("\n\n\n");
  printf("AGUARDE, EM PROCESSAMENTO ... ");
  arq_saida = fopen(nome_file_saida, "w");                     
  /*LEITURA DA MATRIZ DOS ELEMENTOS-TRAÇO*/
  if (opcao1==1){
    arq_entrada3 = fopen(nome_file_entrada3, "r");
    for(i=0;i<=nn;i++){
        for(j=0;j<n+1;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada3, "%s", &y);
            strcpy(str_traco[i], y);
            memcpy(str_traco[i], str_traco[i], MAX);
            }
            else{
            fscanf(arq_entrada3, "%f", &c[j]);
            Ti[i][j]=c[j];
            }
            }
            }
            fclose(arq_entrada3);
            for(i=1;i<=nn;i++){  /*Somente parte numérica*/
               for(j=1;j<n+1;j++){  
               Tii[i-1][j-1]=Ti[i][j];
               }
               }
    }
  /*LEITURA DA MATRIZ DAS AMOSTRAS*/
  arq_entrada1 = fopen(nome_file_entrada1, "r");
  for(i=0;i<12;i++){
        for(j=0;j<=n+1;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada1, "%s", &y);
            strcpy(str_oxido[i], y);
            memcpy(str_oxido[i], str_oxido[i], MAX);
            strcpy(str_amost[j], y);
            memcpy(str_amost[j], str_amost[j], MAX);
            }
            else{
            fscanf(arq_entrada1, "%f", &aa[j]);
            Aa[i][j]=aa[j];
            }
            }
            }
        fclose(arq_entrada1);
        
        /*"PESOS" UTILIZANDO INCERTEZAS DOS ÓXIDOS*/
            INC[0]=1/Aa[1][n+1];
            INC[1]=1/Aa[2][n+1];
            INC[2]=1/Aa[3][n+1];
            INC[3]=1/((0.9*Aa[4][n+1]+Aa[5][n+1])/1.9);
            INC[4]=1/Aa[6][n+1];
            INC[5]=1/Aa[7][n+1];
            INC[6]=1/Aa[8][n+1];
            INC[7]=1/Aa[9][n+1];
            INC[8]=1/Aa[10][n+1];
            INC[9]=1/Aa[11][n+1];
                           
        for(j=0;j<n+1;j++){ /*Transformação do Fe2O3 e FeO para FeOt*/                   
            A[1][j]=Aa[1][j];
            A[2][j]=Aa[2][j];
            A[3][j]=Aa[3][j];
            A[4][j]=0.9*Aa[4][j]+Aa[5][j];
            A[5][j]=Aa[6][j];
            A[6][j]=Aa[7][j];
            A[7][j]=Aa[8][j];
            A[8][j]=Aa[9][j];
            A[9][j]=Aa[10][j];
            A[10][j]=Aa[11][j];
            }
            for(j=1;j<n+1;j++){ /*Normalização a 100%*/
               inicial=0;
               for(i=1;i<11;i++){
               soma[j]=inicial+A[i][j];
               inicial=soma[j];
               }
               for(i=1;i<11;i++){
                   F[i][j]=A[i][j]/soma[j]*100;
                   }
               }
               
        m=0;    /*Ordenação dos óxidos segundo decréscimo de Mgo*/
        for(j=1;j<n+1;j++){
        p=0;
        m++;
          for(k=1;k<n+1;k++){
            if(F[6][j]>=F[6][j+k-m]){
                 p++;
                 }
                 }
                 s=1+n-p;                       
                 for(i=1;i<11;i++){
                   G[i][s]=F[i][j];             
                   }
                 if (opcao1==1){
                 for(i=1;i<=nn;i++){/*Ordenação dos traços segundo decréscimo de Mgo*/ 
                   T[i][s]=Tii[i-1][j-1];
                   }
                 }
                   strcpy(str_amos[s], str_amost[j]);
                   memcpy(str_amos[s], str_amos[s], MAX);
        }
        if (opcao1==1){
    /*LEITURA DA MATRIZ DOS COEF. PARTIÇÃO ROCHAS BÁSICAS E INTERMEDIÁRIAS*/
    arq_entrada4 = fopen(nome_file_entrada4, "r");
    for(i=0;i<=nn;i++){
        for(j=0;j<7;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada4, "%s", &y);
            strcpy(str_basica[j], y);
            memcpy(str_basica[j], str_basica[j], MAX);
            }
            else{
            fscanf(arq_entrada4, "%f", &d[j]);
            BASi[i][j]=d[j];
            }
            }
            }
            fclose(arq_entrada4);
            for(i=1;i<=nn;i++){  /*Somente parte numérica*/
               for(j=1;j<8;j++){  
               BAS[i-1][j-1]=BASi[i][j];
               }
               }
    /*LEITURA DA MATRIZ DOS COEF. PARTIÇÃO ROCHAS ÁCIDAS*/
    arq_entrada5 = fopen(nome_file_entrada5, "r");
    for(i=0;i<=nn;i++){
        for(j=0;j<6;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada5, "%s", &y);
            strcpy(str_acida[j], y);
            memcpy(str_acida[j], str_acida[j], MAX);
            }
            else{
            fscanf(arq_entrada5, "%f", &e[j]);
            ACi[i][j]=e[j];
            }
            }
            }
            fclose(arq_entrada5);
            for(i=1;i<=nn;i++){  /*Somente parte numérica*/
               for(j=1;j<6;j++){  
               AC[i-1][j-1]=ACi[i][j];
               }
               }
    }   
    /*LEITURA DA MATRIZ DAS FASES MINERAIS*/
    arq_entrada2 = fopen(nome_file_entrada2, "r");
    for(i=0;i<=11;i++){
        for(l=0;l<=30;l++){
            if (i==0 || l==0){
            fscanf(arq_entrada2, "%s", &y);
            strcpy(str_mine[l], y);
            memcpy(str_mine[l], str_mine[l], MAX);
            }
            else{
            fscanf(arq_entrada2, "%f", &b[l]);
            Bi[i][l]=b[l];
            }
            }
            }
            fclose(arq_entrada2);
            for(i=1;i<=11;i++){  /*Somente parte numérica dos minerais*/
               for(l=1;l<=30;l++){  
               Bii[i-1][l-1]=Bi[i][l];
               }
               }
               
            /*INCERTEZAS DAS FASES MINERAIS*/
            INCMIN[0]=Bii[0][29]/100;
            INCMIN[1]=Bii[1][29]/100;
            INCMIN[2]=Bii[2][29]/100;
            INCMIN[3]=((0.9*Bii[3][29]+Bii[4][29])/1.9)/100;
            INCMIN[4]=Bii[5][29]/100;
            INCMIN[5]=Bii[6][29]/100;
            INCMIN[6]=Bii[7][29]/100;
            INCMIN[7]=Bii[8][29]/100;
            INCMIN[8]=Bii[9][29]/100;
            INCMIN[9]=Bii[10][29]/100;
            
            for(l=0;l<30;l++){ /*Transformação do Fe2O3 e FeO para FeOt*/                   
            Bnor[0][l]=Bii[0][l];
            Bnor[1][l]=Bii[1][l];
            Bnor[2][l]=Bii[2][l];
            Bnor[3][l]=0.9*Bii[3][l]+Bii[4][l];
            Bnor[4][l]=Bii[5][l];
            Bnor[5][l]=Bii[6][l];
            Bnor[6][l]=Bii[7][l];
            Bnor[7][l]=Bii[8][l];
            Bnor[8][l]=Bii[9][l];
            Bnor[9][l]=Bii[10][l];
            }
            for(l=0;l<29;l++){ /*Normalização a 100%*/
               inicial=0;
               for(i=0;i<10;i++){
               soma[l]=inicial+Bnor[i][l];
               inicial=soma[l];
               }
               for(i=0;i<10;i++){
                   B[i][l]=Bnor[i][l]/soma[l]*100;
                   }
               }              
            for(j=1;j<n+1;j++){/*Cálculo da Olivina de Equilíbrio*/
               M=(((G[4][j]/1.14517)/71.84)/(G[6][j]/40.32))+1;
               oliv[j]=100/(0.3*(M-1)+1);
               }
                
/*CÁLCULOS PARA FRACIONAMENTO DE UM MINERAL*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE UM MINERAL:\n\n");
    for(j=0;j<n;j++){
        x++;
        for(l=0;l<29;l++){
            for(k=1;k<(n-x);k++){
                C[0][0]=C[0][1]=C[1][0]=C[1][1]=0;
                E[0][0]=E[1][0]=0;
                C[10][10]=C[11][11]=C[12][12]=C[13][13]=0;
                E[10][10]=E[11][11]=0;
                incb=incc=incd=inci=incj=incn=0;
                for(i=0;i<10;i++){
                    INCER[i]=(1/INC[i])/100; /*Incertezas dos óxidos*/                                                                        
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine[i]=B[i][l];/*Vetor fases minerais*/ 
                    liq[i]=(G[i+1][j+1+k]);/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i]; 
                    v1[i]=C[0][0]+(mine[i]*INC[i]*INC[i]*mine[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v1a[i]=C[10][10]+(mine[i]*mine[i]/10000);
                    INCN[i]=incn+sqrt(INCMIN[i]*INCMIN[i]+INCMIN[i]*INCMIN[i])*mine[i]*mine[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCMIN[i]*INCMIN[i])*mine[i]*mine[i]/10000;
                    v2[i]=C[0][1]+(mine[i]*INC[i]*INC[i]*liq[i]/10000);
                    v2a[i]=C[11][11]+(mine[i]*liq[i]/10000);
                    INCB[i]=incb+sqrt(INCMIN[i]*INCMIN[i]+INCE[i]*INCE[i])*mine[i]*liq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCE[i]*INCE[i])*mine[i]*liq[i]/10000;
                    v3[i]=C[1][0]+(liq[i]*INC[i]*INC[i]*mine[i]/10000);
                    v3a[i]=C[12][12]+(liq[i]*mine[i]/10000);
                    INCC[i]=incc+sqrt(INCE[i]*INCE[i]+INCMIN[i]*INCMIN[i])*mine[i]*liq[i]/10000*sqrt(INCE[i]*INCE[i]+INCMIN[i]*INCMIN[i])*mine[i]*liq[i]/10000;
                    v4[i]=C[1][1]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    v4a[i]=C[13][13]+(liq[i]*liq[i]/10000);
                    INCD[i]=incd+sqrt(INCE[i]*INCE[i]+INCE[i]*INCE[i])*(liq[i]*liq[i]/10000)*sqrt(INCE[i]*INCE[i]+INCE[i]*INCE[i])*liq[i]*liq[i]/10000;
                    C[0][0]=v1[i];
                    C[10][10]=v1a[i];
                    incn=INCN[i];
                    C[0][1]=v2[i];
                    C[11][11]=v2a[i];
                    incb=INCB[i];
                    C[1][0]=v3[i];
                    C[12][12]=v3a[i];
                    incc=INCC[i];
                    C[1][1]=v4[i];
                    C[13][13]=v4a[i];
                    incd=INCD[i];
                    }
                    det=C[0][0]*C[1][1]-C[0][1]*C[1][0];
                    deta=C[12][12]/(C[10][10]*C[13][13]-C[11][11]*C[12][12]);
                    ince=sqrt(sqrt(incn)*sqrt(incn)+sqrt(incd)*sqrt(incd))*C[10][10]*C[13][13];
                    incf=sqrt(sqrt(incb)*sqrt(incb)+sqrt(incc)*sqrt(incc))*C[11][11]*C[12][12];
                    incg=sqrt(ince*ince+incf*incf);
                    D[0][0]=C[1][1]/det;/*Inversa do produto da matriz transposta pela matriz*/
                    D[1][0]=-C[1][0]/det;
                    inch=sqrt(incc*incc+incg*incg)*sqrt(deta*deta);
                    D[0][1]=-C[0][1]/det;
                    D[1][1]=C[0][0]/det;
                for(i=0;i<10;i++){    
                    v5[i]=E[0][0]+(mine[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v5a[i]=E[10][10]+(mine[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine[i]*solliq[i]/10000;
                    v6[i]=E[1][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v6a[i]=E[11][11]+(liq[i]*solliq[i]/10000);
                    INCJ[i]=incj+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v5[i];
                    inci=INCI[i];
                    E[1][0]=v6[i];
                    incj=INCJ[i];
                    E[10][10]=v5a[i];
                    E[11][11]=v6a[i];
                    }
                    F2=(D[1][0]*E[0][0]+D[1][1]*E[1][0])*100;/*Fração Total Subtraída do Magma Inicial*/
                    inck=sqrt(sqrt(inch*inch)+sqrt(inci)*sqrt(inci))*C[12][12]*E[10][10]*100;
                    incl=sqrt(incj)*C[10][10]*E[11][11]*100;
                    incm=sqrt(inck*inck+incl*incl);/*Incerteza da Fração Total Subtraída do Magma Inicial*/
                if (F2<0 & F2>-100){ /*Condição imposta para não serem realizados cálculos desnecessário*/
                    inicial=0;/*Cálculo dos Erros Relativos dos Elementos Maiores e Menores*/                    
                    for(i=0;i<10;i++){              
                        Fi=B[i][l]/100*F2+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F2);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                      }
                      else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;        
                if (Errorel>=t & Errorel<=u){ /*seleção do erro relativo dos maiores pretendido objetivando evitar cálculos desnecessários*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){/*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){
                   if (l>=0 & l<=2){
                      Dg=BAS[ii][4];
                      }
                   if (l>=3 & l<=12){
                      Dg=BAS[ii][0];
                      }
                   if (l==13){
                      Dg=BAS[ii][5];
                      }
                   if (l==14 || l==17 || l==20 || l==23 || l==26){
                      Dg=BAS[ii][1];
                      }
                   if (l==15 || l==18 || l==21 || l==24 || l==27){
                      Dg=BAS[ii][2];
                      }
                   if (l==16 || l==19 || l==22 || l==25 || l==28){
                      Dg=BAS[ii][3];
                      }
                      }
                  if (G[1][j+1]>=63){
                   if (l>=0 & l<=2){
                      Dg=AC[ii][3];
                      }
                   if (l==13){
                      Dg=AC[ii][4];
                      }
                   if (l==14 || l==17 || l==20 || l==23 || l==26){
                      Dg=AC[ii][0];
                      }
                   if (l==15 || l==18 || l==21 || l==24 || l==27){
                      Dg=AC[ii][1];
                      }
                   if (l==16 || l==19 || l==22 || l==25 || l==28){
                      Dg=AC[ii][2];
                      }
                      }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F2/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                        z=j+1+k;
                        /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                        if (Errorel>=t & Errorel<=u & (((G[1][j+1]<52 & l==0) || (G[1][j+1]<63 & G[1][j+1]>=52 & l==1) || (G[1][j+1]>63 & l==2)) || /*Magnetita básica, intermediária e ácida*/
                           (G[6][j+1]>G4 & (l==3&oliv[j+1]>84.5&oliv[j+1]<86 || l==4&oliv[j+1]>83.5&oliv[j+1]<=84.5 || l==5&oliv[j+1]>82.5&oliv[j+1]<=83.5 || l==6&oliv[j+1]>81&oliv[j+1]<=82.5 || l==7&oliv[j+1]>79&oliv[j+1]<=81 ||
                           l==8&oliv[j+1]>77.5&oliv[j+1]<=79 || l==9&oliv[j+1]>76.5&oliv[j+1]<=77.5 || l==10&oliv[j+1]>75.5&oliv[j+1]<=76.5 || l==11&oliv[j+1]>72.5&oliv[j+1]<=75.5 || l==12&oliv[j+1]>69&oliv[j+1]<=72.5)) || /*seleção das olivinas*/
                           (G[6][j+1]>G1 & (l==13||l==14||l==15||l==16)) || /*seleção do grupo 1*/
                           (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==13||l==17||l==18||l==19)) || /*seleção do grupo 2*/
                           (G[6][j+1]<=G2 & G[6][j+1]>G3 & (l==13||l==20||l==21||l==22)) || /*seleção do grupo 3*/
                           (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<=63 & (l==13||l==23||l==24||l==25)) || /*seleção do grupo 4*/
                           (G[6][j+1]<=G4 & G[1][j+1]>63 & (l==13||l==26||l==27||l==28)))) /*seleção do grupo 5*/
                           {
                           fprintf(arq_saida, "Evolução: ");
                           fprintf(arq_saida, str_amos[j+1]);
                           fprintf(arq_saida," a ");
                           fprintf(arq_saida, str_amos[z]);
                           fprintf(arq_saida, "\n");
                           fprintf(arq_saida, "Mineral Fracionado: ");
                           fprintf(arq_saida, str_mine[l+1]);
                           fprintf(arq_saida, " (100%%)\nSubtraído do Magma Inicial: (%.2f", -1*F2);
                           fprintf(arq_saida, " +/- %.2f)%%\n\n", incm);
                           fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){                          /*Condição para não imprimir Fe2O3 e sim o FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                           if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                           }
                           }                                        
                    }                 
                    }
                    }
                    }
                    
                    /*CÁLCULOS PARA FRACIONAMENTO DE DOIS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE DOIS MINERAIS:\n\n");
    for(j=0;j<n;j++){
        x++;
        p=-1;
        for(l=0;l<28;l++){
          p++;
          for(m=1;m<(29-p);m++){
            for(k=1;k<(n-x);k++){
                C[0][0]=C[0][1]=C[0][2]=C[1][0]=C[1][1]=C[1][2]=C[2][0]=C[2][1]=C[2][2]=0;
                E[0][0]=E[1][0]=E[2][0]=0;
                E[10][10]=E[11][11]=E[12][12]=0;
                H[0][0]=H[0][1]=H[1][0]=H[1][1]=0;
                H[10][10]=H[11][11]=H[12][12]=H[13][13]=0;
                J[0][0]=J[1][0]=0;
                J[10][10]=J[11][11]=0;
                incs=inct=incu=incdd=incee=0;
                for(i=0;i<10;i++){
                    INCER[i]=(1/INC[i])/100;  /*incertezas dos óxidos*/                                                    
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][l];/*Vetor fase mineral*/
                    mine2[i]=B[i][l+m];/*Vetor fase mineral*/
                    liq[i]=(G[i+1][j+1+k]);/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v4[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v5[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v6[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v7[i]=C[2][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v8[i]=C[2][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v9[i]=C[2][2]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[1][0]=v4[i];
                    C[1][1]=v5[i];
                    C[1][2]=v6[i];
                    C[2][0]=v7[i];
                    C[2][1]=v8[i];
                    C[2][2]=v9[i];
                    }
                    det=C[0][0]*C[1][1]*C[2][2]+C[0][1]*C[1][2]*C[2][0]+C[0][2]*C[1][0]*C[2][1]-C[0][1]*C[1][0]*C[2][2]-C[0][0]*C[1][2]*C[2][1]-C[0][2]*C[1][1]*C[2][0];
                    /*Inversa do produto da matriz transposta pela matriz*/
                    D[0][0]=(C[1][1]*C[2][2]-C[1][2]*C[2][1])/det;
                    D[1][0]=(C[1][2]*C[2][0]-C[1][0]*C[2][2])/det;
                    D[2][0]=(C[1][0]*C[2][1]-C[1][1]*C[2][0])/det;
                    D[0][1]=(C[0][2]*C[2][1]-C[0][1]*C[2][2])/det;
                    D[1][1]=(C[0][0]*C[2][2]-C[0][2]*C[2][0])/det;
                    D[2][1]=(C[0][1]*C[2][0]-C[0][0]*C[2][1])/det;
                    D[0][2]=(C[0][1]*C[1][2]-C[0][2]*C[1][1])/det;
                    D[1][2]=(C[0][2]*C[1][0]-C[0][0]*C[1][2])/det;
                    D[2][2]=(C[0][0]*C[1][1]-C[0][1]*C[1][0])/det;
                    for(i=0;i<10;i++){
                    v10[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v10a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCS[i]=incs+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v11[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v11a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCT[i]=inct+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v12[i]=E[2][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v12a[i]=E[12][12]+(liq[i]*solliq[i]/10000);
                    INCU[i]=incu+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v10[i];
                    E[10][10]=v10a[i];
                    incs=INCS[i];
                    E[1][0]=v11[i];
                    E[11][11]=v11a[i];
                    inct=INCT[i];
                    E[2][0]=v12[i];
                    E[12][12]=v12a[i];
                    incu=INCU[i];
                    }
                    F3=(D[2][0]*E[0][0]+D[2][1]*E[1][0]+D[2][2]*E[2][0])*100;/*Fração Total Subtraída do Magma Inicial*/
                    incv=sqrt(incs)*D[2][0]*E[10][10];
                    incx=sqrt(inct)*D[2][1]*E[11][11];
                    incz=sqrt(incu)*D[2][2]*E[12][12];
                    incw=sqrt(incv*incv+incx*incx+incz*incz); /*incerteza da fração total subtraída do magma inicial*/
                /*CÁLCULO DAS PORCENTAGENS DE CADA MINERAL FRACIONADO*/
                if (F3<0 & F3>-100){ /*Condição para evitar cálculos desnecessários*/
                 for(i=0;i<10;i++){
                    v13[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v13a[i]=H[10][10]+(mine1[i]*mine1[i]/10000);
                    v14[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v14a[i]=H[11][11]+(mine1[i]*mine2[i]/10000);
                    v15[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v15a[i]=H[12][12]+(mine2[i]*mine1[i]/10000);
                    v16[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v16a[i]=H[13][13]+(mine2[i]*mine2[i]/10000);
                    H[0][0]=v13[i];
                    H[10][10]=v13a[i];
                    H[0][1]=v14[i];
                    H[11][11]=v14a[i];
                    H[1][0]=v15[i];
                    H[12][12]=v15a[i];
                    H[1][1]=v16[i];
                    H[13][13]=v16a[i];
                    }
                    det1=H[0][0]*H[1][1]-H[0][1]*H[1][0];
                    det1a=H[10][10]*H[13][13]-H[11][11]*H[12][12];
                    I[0][0]=H[1][1]/det1;/*Inversa do produto da matriz transposta pela matriz*/
                    I[10][10]=H[13][13]/det1a;
                    I[1][0]=-H[1][0]/det1;
                    I[11][11]=H[12][12]/det1a;
                    I[0][1]=-H[0][1]/det1;
                    I[12][12]=H[11][11]/det1a;
                    I[1][1]=H[0][0]/det1;
                    I[13][13]=H[10][10]/det1a;
                 for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F3/100)/((-1)*F3/100);
                    incy=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    incaa=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F3/100;
                    incbb=sqrt(incy*incy+incaa*incaa);
                    INCH[i]=sqrt(incbb*incbb+incw*incw/10000)*cum[i]/100;
                    v17[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor cumulato*/
                    v17a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCDD[i]=incdd+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v18[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v18a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCEE[i]=incee+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    J[0][0]=v17[i];
                    J[10][10]=v17a[i];
                    incdd=INCDD[i];
                    J[1][0]=v18[i];
                    J[11][11]=v18a[i];
                    incee=INCEE[i];
                    }
                    F4=(I[0][0]*J[0][0]+I[0][1]*J[1][0]);
                    incff=sqrt(incdd)*J[10][10];
                    incgg=sqrt(incee)*J[11][11];
                    inchh=sqrt(incff*incff+incgg*incgg);
                    F5=(I[1][0]*J[0][0]+I[1][1]*J[1][0]);
                    incii=sqrt(incdd)*J[10][10];
                    incjj=sqrt(incee)*J[11][11];
                    inckk=sqrt(incii*incii+incjj*incjj);
                    ML=(1-F4-F5)/(I[0][0]+I[0][1]+I[1][0]+I[1][1]); /*Multiplicador de Lagrange*/
                    incll=sqrt(inchh*inchh+inckk*inckk)*ML;
                    F6=(ML*(I[0][0]+I[0][1])+F4)*100;/*Fração Mineral 1*/
                    incnn=sqrt(inchh*inchh+incll*incll)*F6;/*Incerteza do mineral 1*/
                    F7=(ML*(I[1][0]+I[1][1])+F5)*100;/*Fração Mineral 2*/
                    incpp=sqrt(inckk*inckk+incll*incll)*F7; /*Incerteza do mineral 2*/
                    }
                if (F3<0 & F3>-100 & F6>0 & F7>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo*/                    
                    for(i=0;i<10;i++){             
                        Fi=(B[i][l]*F6*F3)/10000+(B[i][l+m]*F7*F3)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F3);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                
                if (Errorel>=t & Errorel<=u){
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ /*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12){
                      Dg=F6/100*BAS[ii][4]+F7/100*BAS[ii][0];
                      }
                   if (l>=0 & l<=2 & l+m==13){
                      Dg=F6/100*BAS[ii][4]+F7/100*BAS[ii][5];
                      }
                   if (l>=0 & l<=2 & (l+m==14 || l+m==17 || l+m==20 || l+m==23 || l+m==26)){
                      Dg=F6/100*BAS[ii][4]+F7/100*BAS[ii][1];
                      }
                   if (l>=0 & l<=2 & (l+m==15 || l+m==18 || l+m==21 || l+m==24 || l+m==27)){
                      Dg=F6/100*BAS[ii][4]+F7/100*BAS[ii][2];
                      }
                   if (l>=0 & l<=2 & (l+m==16 || l+m==19 || l+m==22 || l+m==25 || l+m==28)){
                      Dg=F6/100*BAS[ii][4]+F7/100*BAS[ii][3];
                      }
                   if (l>=3 & l<=12 & l+m==13){
                      Dg=F6/100*BAS[ii][0]+F7/100*BAS[ii][5];
                      }
                   if (l>=3 & l<=12 & (l+m==14 || l+m==17)){
                      Dg=F6/100*BAS[ii][0]+F7/100*BAS[ii][1];
                      }
                   if (l>=3 & l<=12 & (l+m==15 || l+m==18)){
                      Dg=F6/100*BAS[ii][0]+F7/100*BAS[ii][2];
                      }
                   if (l>=3 & l<=12 & (l+m==16 || l+m==19)){
                      Dg=F6/100*BAS[ii][0]+F7/100*BAS[ii][3];
                      }
                   if (l==13 & (l+m==14 || l+m==17 || l+m==20 || l+m==23 || l+m==26)){
                      Dg=F6/100*BAS[ii][5]+F7/100*BAS[ii][1];
                      }
                   if (l==13 & (l+m==15 || l+m==18 || l+m==21 || l+m==24 || l+m==27)){
                      Dg=F6/100*BAS[ii][5]+F7/100*BAS[ii][2];
                      }
                   if (l==13 & (l+m==16 || l+m==19 || l+m==22 || l+m==25 || l+m==28)){
                      Dg=F6/100*BAS[ii][5]+F7/100*BAS[ii][3];
                      }   
                   if (l==14 & l+m==15){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][2];
                      }
                   if (l==14 & l+m==16){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][3];
                      }
                   if (l==15 & l+m==16){
                      Dg=F6/100*BAS[ii][2]+F7/100*BAS[ii][3];
                      }
                   if (l==17 & l+m==18){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][2];
                      }
                   if (l==17 & l+m==19){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][3];
                      }
                   if (l==18 & l+m==19){
                      Dg=F6/100*BAS[ii][2]+F7/100*BAS[ii][3];
                      }
                   if (l==20 & l+m==21){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][2];
                      }
                   if (l==20 & l+m==22){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][3];
                      }
                   if (l==21 & l+m==22){
                      Dg=F6/100*BAS[ii][2]+F7/100*BAS[ii][3];
                      }
                   if (l==23 & l+m==24){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][2];
                      }
                   if (l==23 & l+m==25){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][3];
                      }
                   if (l==24 & l+m==25){
                      Dg=F6/100*BAS[ii][2]+F7/100*BAS[ii][3];
                      }
                   if (l==26 & l+m==27){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][2];
                      }
                   if (l==26 & l+m==28){
                      Dg=F6/100*BAS[ii][1]+F7/100*BAS[ii][3];
                      }
                   if (l==27 & l+m==28){
                      Dg=F6/100*BAS[ii][2]+F7/100*BAS[ii][3];
                      }
                      }
                  if (G[1][j+1]>=63){
                   if (l>=0 & l<=2 & l+m==13){
                      Dg=F6/100*AC[ii][3]+F7/100*AC[ii][4];
                      }
                   if (l>=0 & l<=2 & (l+m==14 || l+m==17 || l+m==20 || l+m==23 || l+m==26)){
                      Dg=F6/100*AC[ii][3]+F7/100*AC[ii][0];
                      }
                   if (l>=0 & l<=2 & (l+m==15 || l+m==18 || l+m==21 || l+m==24 || l+m==27)){
                      Dg=F6/100*AC[ii][3]+F7/100*AC[ii][1];
                      }
                   if (l>=0 & l<=2 & (l+m==16 || l+m==19 || l+m==22 || l+m==25 || l+m==28)){
                      Dg=F6/100*AC[ii][3]+F7/100*AC[ii][2];
                      }
                   if (l==13 & (l+m==14 || l+m==17 || l+m==20 || l+m==23 || l+m==26)){
                      Dg=F6/100*AC[ii][4]+F7/100*AC[ii][0];
                      }
                   if (l==13 & (l+m==15 || l+m==18 || l+m==21 || l+m==24 || l+m==27)){
                      Dg=F6/100*AC[ii][4]+F7/100*AC[ii][1];
                      }
                   if (l==13 & (l+m==16 || l+m==19 || l+m==22 || l+m==25 || l+m==28)){
                      Dg=F6/100*AC[ii][4]+F7/100*AC[ii][2];
                      }    
                   if (l==14 & l+m==15){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][1];
                      }
                   if (l==14 & l+m==16){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][2];
                      }
                   if (l==15 & l+m==16){
                      Dg=F6/100*AC[ii][1]+F7/100*AC[ii][2];
                      } 
                   if (l==17 & l+m==18){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][1];
                      }
                   if (l==17 & l+m==19){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][2];
                      }
                   if (l==18 & l+m==19){
                      Dg=F6/100*AC[ii][1]+F7/100*AC[ii][2];
                      }
                   if (l==20 & l+m==21){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][1];
                      }
                   if (l==20 & l+m==22){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][2];
                      }
                   if (l==21 & l+m==22){
                      Dg=F6/100*AC[ii][1]+F7/100*AC[ii][2];      
                      }
                   if (l==23 & l+m==24){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][1];
                      }
                   if (l==23 & l+m==25){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][2];
                      }
                   if (l==24 & l+m==25){
                      Dg=F6/100*AC[ii][1]+F7/100*AC[ii][2];
                      }  
                   if (l==26 & l+m==27){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][1];
                      }
                   if (l==26 & l+m==28){
                      Dg=F6/100*AC[ii][0]+F7/100*AC[ii][2];
                      }
                   if (l==27 & l+m==28){
                      Dg=F6/100*AC[ii][1]+F7/100*AC[ii][2];
                      }
                      }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F3/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                    z=j+1+k;
                    w=l+1+m;
                    /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                    if (Errorel>=t & Errorel<=u & ((G[1][j+1]<52&(l==0 & (m==3&oliv[j+1]>84.5&oliv[j+1]<86) || l==0 &(m==4&oliv[j+1]>83.5&oliv[j+1]<=84.5) || l==0 &(m==5&oliv[j+1]>82.5 & oliv[j+1]<=83.5) || l==0 &(m==6&oliv[j+1]>81 & oliv[j+1]<=82.5) || l==0 &(m==7&oliv[j+1]>79&oliv[j+1]<=81) || l==0 &(m==8&oliv[j+1]>77.5&oliv[j+1]<=79) || l==0 &(m==9&oliv[j+1]>76.5&oliv[j+1]<=77.5) || l==0 &(m==10&oliv[j+1]>75.5&oliv[j+1]<=76.5) || l==0 &(m==11&oliv[j+1]>72.5&oliv[j+1]<=75.5) || l==0 &(m==12&oliv[j+1]>69&oliv[j+1]<=72.5))) || /*Magnetita básica com olivinas*/             
                       (G[6][j+1]>G1 & G[1][j+1]<52 & l==0 & (m==13 || m==14 || m==15 || m==16)) || /*Magnetita Básica com grupo 1 e apatita*/ 
                       (G[6][j+1]<=G1 & G[6][j+1]>G2 & G[1][j+1]<52 & l==0 & (m==17 || m==18 || m==19)) || /*Magnetita Básica com grupo 2*/
                       (G[6][j+1]<=G2 & G[6][j+1]>G3 & G[1][j+1]<52 & l==0 & (m==20 || m==21 || m==22)) || /*Magnetita Básica com grupo 3*/
                       (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<=63 & G[1][j+1]<52 & l==0 & (m==23 || m==24 || m==25)) || /*Magnetita Básica com grupo 4*/
                       (G[1][j+1]<63 & G[1][j+1]>=52 & l==1 & ((m==2&oliv[j+1]>84.5&oliv[j+1]<86) || (m==3&oliv[j+1]>83.5&oliv[j+1]<=84.5) || (m==4&oliv[j+1]>82.5 & oliv[j+1]<=83.5) || (m==5&oliv[j+1]>81 & oliv[j+1]<=82.5) || (m==6&oliv[j+1]>79&oliv[j+1]<=81) || (m==7&oliv[j+1]>77.5&oliv[j+1]<=79) || (m==8&oliv[j+1]>76.5&oliv[j+1]<=77.5) || (m==9&oliv[j+1]>75.5&oliv[j+1]<=76.5) || (m==10&oliv[j+1]>72.5&oliv[j+1]<=75.5) || (m==11&oliv[j+1]>69&oliv[j+1]<=72.5))) || /*Magnetita intermediária com olivinas*/ 
                       (G[6][j+1]>G1 & G[1][j+1]<63 & G[1][j+1]>=52 & l==1 & (m==12 || m==13 || m==14 || m==15)) ||/*Magnetita Intermediária com grupo 1 e apatita*/ 
                       (G[6][j+1]<=G1 & G[6][j+1]>G2 & G[1][j+1]<63 & G[1][j+1]>=52 & l==1 & (m==16 || m==17 || m==18)) ||/*Magnetita Intermediária com grupo 2*/
                       (G[6][j+1]<=G2 & G[6][j+1]>G3 & G[1][j+1]<63 & G[1][j+1]>=52 & l==1 & (m==19 || m==20 || m==21)) || /*Magnetita Intermediária com grupo 3*/
                       (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<63 & G[1][j+1]>=52 & l==1 & (m==22 || m==23 || m==24)) || /*Magnetita Intermediária com grupo 4*/
                       (G[1][j+1]>63 & l==2 & (m==1&oliv[j+1]>84.5&oliv[j+1]<86 || m==2&oliv[j+1]>83.5&oliv[j+1]<=84.5 || m==3&oliv[j+1]>82.5 & oliv[j+1]<=83.5 || m==4&oliv[j+1]>81 & oliv[j+1]<=82.5 || m==5&oliv[j+1]>79&oliv[j+1]<=81 || m==6&oliv[j+1]>77.5&oliv[j+1]<=79 || m==7&oliv[j+1]>76.5&oliv[j+1]<=77.5 || m==8&oliv[j+1]>75.5&oliv[j+1]<=76.5 || m==9&oliv[j+1]>72.5&oliv[j+1]<=75.5 || m==10&oliv[j+1]>69&oliv[j+1]<=72.5)) || /*Magnetita ácida com olivinas*/                      
                       (G[6][j+1]>G1 & G[1][j+1]>63 & l==2 & (m==11 || m==12 || m==13 || m==14)) || /*Magnetita ácida com grupo 1 e apatita*/ 
                       (G[6][j+1]<=G1 & G[6][j+1]>G2 & G[1][j+1]>63 & l==2 & (m==15 || m==16 || m==17)) || /*Magnetita ácida com grupo 2*/
                       (G[6][j+1]<=G2 & G[6][j+1]>G3 & G[1][j+1]>63 & l==2 & (m==18 || m==19 || m==20)) || /*Magnetita ácida com grupo 3*/
                       (G[6][j+1]<=G4 & G[1][j+1]>63 & l==2 & (m==24 || m==25 || m==26)) ||/*Magnetita ácida com grupo 5*/
                       (G[6][j+1]>G1 & (l==3&(m==10||m==11||m==12||m==13)&oliv[j+1]>84.5&oliv[j+1]<86 || l==4&(m==9||m==10||m==11||m==12)&oliv[j+1]>83.5&oliv[j+1]<=84.5 || l==5&(m==8||m==9||m==10||m==11)&oliv[j+1]>82.5&oliv[j+1]<=83.5 || l==6&(m==7||m==8||m==9||m==10)&oliv[j+1]>81&oliv[j+1]<=82.5 || l==7&(m==6||m==7||m==8||m==9)&oliv[j+1]>79&oliv[j+1]<=81 || l==8&(m==5||m==6||m==7||m==8)&oliv[j+1]>77.5&oliv[j+1]<=79 || l==9&(m==4||m==5||m==6||m==7)&oliv[j+1]>76.5&oliv[j+1]<=77.5 || l==10&(m==3||m==4||m==5||m==6)&oliv[j+1]>75.5&oliv[j+1]<=76.5 || l==11&(m==2||m==3||m==4||m==5)&oliv[j+1]>72.5&oliv[j+1]<=75.5 || l==12&(m==1||m==2||m==3||m==4)&oliv[j+1]>69&oliv[j+1]<=72.5)) || /*Olivina com Grupo 1 e Apatita*/
                       (G[6][j+1]>G1 & (l==13 &(m==1||m==2||m==3)||l==14 &(m==1||m==2)||l==15 &(m==1))) || /*seleção do grupo 1*/
                       (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==3&(m==10||m==14||m==15||m==16)&oliv[j+1]>84.5&oliv[j+1]<86 || l==4&(m==9||m==13||m==14||m==15)&oliv[j+1]>83.5&oliv[j+1]<=84.5 || l==5&(m==8||m==12||m==13||m==14)&oliv[j+1]>82.5&oliv[j+1]<=83.5 || l==6&(m==7||m==11||m==12||m==13)&oliv[j+1]>81&oliv[j+1]<=82.5 || l==7&(m==6||m==10||m==11||m==12)&oliv[j+1]>79&oliv[j+1]<=81 || l==8&(m==5||m==9||m==10||m==11)&oliv[j+1]>77.5&oliv[j+1]<=79 || l==9&(m==4||m==8||m==9||m==10)&oliv[j+1]>76.5&oliv[j+1]<=77.5 || l==10&(m==3||m==7||m==8||m==9)&oliv[j+1]>75.5&oliv[j+1]<=76.5 || l==11&(m==2||m==6||m==7||m==8)&oliv[j+1]>72.5&oliv[j+1]<=75.5 || l==12&(m==1||m==5||m==6||m==7)&oliv[j+1]>69&oliv[j+1]<=72.5)) || /*Olivina com grupo 2*/          
                       (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==13 &(m==4||m==5||m==6)||l==17 &(m==1||m==2)||l==18 &(m==1))) || /*seleção do grupo 2*/
                       (G[6][j+1]<=G2 & G[6][j+1]>G3 & (l==13&(m==7||m==8||m==9)||l==20&(m==1||m==2)||l==21&(m==1))) || /*seleção do grupo 3*/
                       (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<=63 & (l==13&(m==10||m==11||m==12)||l==23&(m==1||m==2)||l==24&(m==1))) || /*seleção do grupo 4*/
                       (G[6][j+1]<=G4 & G[1][j+1]>63 & (l==13&(m==13||m==14||m==15||m==16)||l==26&(m==1||m==2||m==3)||l==27&(m==1))))) { /*seleção do grupo 5*/
                       fprintf(arq_saida, "Evolução: ");
                       fprintf(arq_saida, str_amos[j+1]);
                       fprintf(arq_saida," a ");
                       fprintf(arq_saida, str_amos[z]);
                       fprintf(arq_saida, "\n");
                       fprintf(arq_saida, "Minerais Fracionados: ");
                       fprintf(arq_saida, str_mine[l+1]);
                       fprintf(arq_saida, " (%.2f", F6);
                       fprintf(arq_saida, " +/- %.2f)%% e ", incnn);
                       fprintf(arq_saida, str_mine[w]);
                       fprintf(arq_saida, " (%.2f", F7);
                       fprintf(arq_saida, " +/- %.2f)%%\n", incpp);
                       fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F3);
                       fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                       fprintf(arq_saida, "Erros Relativos (maiores):\n");
                       for(i=0;i<11;i++){
                           if (i<3){  /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                           if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }
                    }
                    }
                    }
                    }
                    }
                    
                    /*CÁLCULOS PARA FRACIONAMENTO DE TRÊS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE TRÊS MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<27;l++){
        p++;
        r=-1;
        for(m=1;m<(28-p);m++){
          r++;
          for(q=1;q<(28-r);q++){
            for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[1][0]=H[1][1]=H[1][2]=H[2][0]=H[2][1]=H[2][2]=0;
                    J[0][0]=J[1][0]=J[2][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=0;
                for(i=0;i<10;i++){
                    INCER[i]=(1/INC[i])/100; /*incerteza dos óxidos*/                                                    
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][l];/*Vetor fase mineral*/
                    mine2[i]=B[i][l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][l+m+q];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v5[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v6[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v7[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v8[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v9[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v10[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v11[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v12[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v13[i]=C[3][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v14[i]=C[3][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v15[i]=C[3][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v16[i]=C[3][3]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[1][0]=v5[i];
                    C[1][1]=v6[i];
                    C[1][2]=v7[i];
                    C[1][3]=v8[i];
                    C[2][0]=v9[i];
                    C[2][1]=v10[i];
                    C[2][2]=v11[i];
                    C[2][3]=v12[i];
                    C[3][0]=v13[i];
                    C[3][1]=v14[i];
                    C[3][2]=v15[i];
                    C[3][3]=v16[i];
                    }
                for (zz=0;zz<4;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][4]=1;
                    C[1][4]=C[2][4]=C[3][4]=0;
                    }
                    if (zz==1){
                    C[0][4]=0;
                    C[1][4]=1;
                    C[2][4]=C[3][4]=0;
                    }
                    if (zz==2){
                    C[0][4]=C[1][4]=0;
                    C[2][4]=1;
                    C[3][4]=0;
                    }
                    if (zz==3){
                    C[0][4]=C[1][4]=C[2][4]=0;
                    C[3][4]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    for (ii=1;ii<4;ii++){
                        for (jj=0;jj<5;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[4]=Da[2][1]/Da[1][1];
                    pivo[5]=Da[3][1]/Da[1][1];
                    for (ii=2;ii<4;ii++){
                        for (jj=1;jj<5;jj++){
                        Db[ii][jj]=(-1*pivo[ii+2]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[6]=Db[3][2]/Db[2][2];
                    for (ii=3;ii<4;ii++){
                        for (jj=2;jj<5;jj++){
                        Dc[ii][jj]=(-pivo[ii+3]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    D[3][zz]=Dc[3][4]/Dc[3][3];
                    D[2][zz]=(Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];
                    }
                    incb=incc=incd=incf=incj=inck=incl=0;
                    for(i=0;i<10;i++){
                    v17[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v17a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v18[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v18a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v19[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v19a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v20[i]=E[3][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v20a[i]=E[13][13]+(liq[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v17[i];/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    E[10][10]=v17a[i];
                    incb=INCB[i];
                    E[1][0]=v18[i];
                    E[11][11]=v18a[i];
                    incc=INCC[i];
                    E[2][0]=v19[i];
                    E[12][12]=v19a[i];
                    incd=INCD[i];
                    E[3][0]=v20[i];
                    E[13][13]=v20a[i];
                    incf=INCF[i];
                    }
                    F4=(D[3][0]*E[0][0]+D[3][1]*E[1][0]+D[3][2]*E[2][0]+D[3][3]*E[3][0])*100;/*Fração Subtraída do magma inicial*/
                    incu=sqrt(incb)*D[3][0]*E[10][10];
                    incv=sqrt(incc)*D[3][1]*E[11][11];
                    incx=sqrt(incd)*D[3][2]*E[12][12];
                    incz=sqrt(incf)*D[3][3]*E[13][13];                    
                    incw=sqrt(incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/                
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F4<0 & F4>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v21[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v22[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v23[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v24[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v25[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v26[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v27[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v28[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v29[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    H[0][0]=v21[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v22[i];
                    H[0][2]=v23[i];
                    H[1][0]=v24[i];
                    H[1][1]=v25[i];
                    H[1][2]=v26[i];
                    H[2][0]=v27[i];
                    H[2][1]=v28[i];
                    H[2][2]=v29[i];
                    }
                    det1=H[0][0]*H[1][1]*H[2][2]+H[0][1]*H[1][2]*H[2][0]+H[0][2]*H[1][0]*H[2][1]-H[0][1]*H[1][0]*H[2][2]-H[0][0]*H[1][2]*H[2][1]-H[0][2]*H[1][1]*H[2][0];
                    I[0][0]=(H[1][1]*H[2][2]-H[1][2]*H[2][1])/det1;/*Inversa do produto da matriz transposta pela matriz*/
                    I[1][0]=(H[1][2]*H[2][0]-H[1][0]*H[2][2])/det1;
                    I[2][0]=(H[1][0]*H[2][1]-H[1][1]*H[2][0])/det1;
                    I[0][1]=(H[0][2]*H[2][1]-H[0][1]*H[2][2])/det1;
                    I[1][1]=(H[0][0]*H[2][2]-H[0][2]*H[2][0])/det1;
                    I[2][1]=(H[0][1]*H[2][0]-H[0][0]*H[2][1])/det1;
                    I[0][2]=(H[0][1]*H[1][2]-H[0][2]*H[1][1])/det1;
                    I[1][2]=(H[0][2]*H[1][0]-H[0][0]*H[1][2])/det1;
                    I[2][2]=(H[0][0]*H[1][1]-H[0][1]*H[1][0])/det1;
                for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F4/100)/((-1)*F4/100);
                    incg=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inch=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F4/100;
                    inci=sqrt(incg*incg+inch*inch);
                    INCH[i]=sqrt(inci*inci+incw*incw/10000)*cum[i]/100;                  
                    v30[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v30a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCJ[i]=incj+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v31[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v31a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCK[i]=inck+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v32[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v32a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCL[i]=incl+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    J[0][0]=v30[i];
                    J[10][10]=v30a[i];
                    incj=INCJ[i];
                    J[1][0]=v31[i];
                    J[11][11]=v31a[i];
                    inck=INCK[i];
                    J[2][0]=v32[i];
                    J[12][12]=v32a[i];
                    incl=INCL[i];
                    }
                    F5=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]);
                    incm=sqrt(incj)*J[10][10];
                    incn=sqrt(inck)*J[11][11];
                    inco=sqrt(incl)*J[12][12];
                    incp=sqrt(incm*incm+incn*incn+inco*inco);
                    F6=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]);
                    F7=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]);
                    ML=(1-F5-F6-F7)/(I[0][0]+I[0][1]+I[0][2]+I[1][0]+I[1][1]+I[1][2]+I[2][0]+I[2][1]+I[2][2]); /*Multiplicador de Lagrange*/
                    incq=sqrt(incp*incp*3)*ML;
                    F8=(ML*(I[0][0]+I[0][1]+I[0][2])+F5)*100; /*Fração Mineral 1*/
                    incr=sqrt(incp*incp+incq*incq)*F8; /*incerteza do mineral 1*/
                    F9=(ML*(I[1][0]+I[1][1]+I[1][2])+F6)*100; /*Fração Mineral 2*/
                    incs=sqrt(incp*incp+incq*incq)*F9; /*incerteza do mineral 2*/
                    F10=(ML*(I[2][0]+I[2][1]+I[2][2])+F7)*100; /*Fração Mineral 3*/
                    inct=sqrt(incp*incp+incq*incq)*F10; /*incerteza do mineral 3*/
                    }
                if (F4<0 & F4>-100 & F8>0 & F9>0 & F10>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos elementos maiores e menores*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][l]*F8*F4)/10000+(B[i][l+m]*F9*F4)/10000+(B[i][l+m+q]*F10*F4)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F4);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                      
                if (Errorel>=t & Errorel<=u){
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ /*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){ /*COEFICIENTE DE PARTIÇÃO BÁSICO E INTERMEDIÁRIO*/
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][0]+F10*BAS[ii][5])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & (l+m+q==14||l+m+q==17)) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][0]+F10*BAS[ii][1])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & (l+m+q==15||l+m+q==18)) 
                      Dg=(F8/100*BAS[ii][4]+F9*BAS[ii][0]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & (l+m+q==16||l+m+q==19)) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][0]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==14||l+m+q==17||l+m+q==20||l+m+q==23||l+m+q==26)) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][5]+F10*BAS[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==15||l+m+q==18||l+m+q==21||l+m+q==24||l+m+q==27)) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][5]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==16||l+m+q==19||l+m+q==22||l+m+q==25||l+m+q==28)) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][5]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==15) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==16) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==15 & l+m+q==16) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==17 & l+m+q==18) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==17 & l+m+q==19) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==18 & l+m+q==19) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;   
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==21) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==22) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==21 & l+m+q==22) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==24) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==25) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==24 & l+m+q==25) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==27) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==28) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==27 & l+m+q==28) 
                      Dg=(F8*BAS[ii][4]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==13 & (l+m+q==14||l+m+q==17)) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][5]+F10*BAS[ii][1])/100;
                   if (l>=3 & l<=12 & l+m==13 & (l+m+q==15||l+m+q==18)) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][5]+F10*BAS[ii][2])/100;
                   if (l>=3 & l<=12 & l+m==13 & (l+m+q==16||l+m+q==19)) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][5]+F10*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==14 & l+m+q==15) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=3 & l<=12 & l+m==14 & l+m+q==16) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==15 & l+m+q==16) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==17 & l+m+q==18) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][1]+F10*BAS[ii][2])/100;
                   if (l>=3 & l<=12 & l+m==17 & l+m+q==19) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][1]+F10*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==18 & l+m+q==19) 
                      Dg=(F8*BAS[ii][0]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l==14 & l+m==15 & l+m+q==16) 
                      Dg=(F8*BAS[ii][1]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l==17 & l+m==18 & l+m+q==19) 
                      Dg=(F8*BAS[ii][1]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l==20 & l+m==21 & l+m+q==22) 
                      Dg=(F8*BAS[ii][1]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l==23 & l+m==24 & l+m+q==25) 
                      Dg=(F8*BAS[ii][1]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;
                   if (l==26 & l+m==27 & l+m+q==28) 
                      Dg=(F8*BAS[ii][1]+F9*BAS[ii][2]+F10*BAS[ii][3])/100;   
                   }
                  if (G[1][j+1]>=63){  /*COEFICIENTE DE PARTIÇÃO ÁCIDO*/
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==14||l+m+q==17||l+m+q==20||l+m+q==23||l+m+q==26)) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][4]+F10*AC[ii][0])/100;
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==15||l+m+q==18||l+m+q==21||l+m+q==24||l+m+q==27)) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][4]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & (l+m+q==16||l+m+q==19||l+m+q==22||l+m+q==25||l+m+q==28)) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][4]+F10*AC[ii][2])/100;  
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==15) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==16) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==15 & l+m+q==16) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][1]+F10*AC[ii][2])/100;  
                   if (l>=0 & l<=2 & l+m==17 & l+m+q==18) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==17 & l+m+q==19) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==18 & l+m+q==19) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][1]+F10*AC[ii][2])/100;       
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==21) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==22) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==21 & l+m+q==22) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==24) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==25) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==24 & l+m+q==25) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==27) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==28) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==29) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][0]+F10*AC[ii][0])/100;
                   if (l>=0 & l<=2 & l+m==27 & l+m+q==28) 
                      Dg=(F8*AC[ii][3]+F9*AC[ii][1]+F10*AC[ii][2])/100; 
                   if (l==14 & l+m==15 & l+m+q==16) 
                      Dg=(F8*AC[ii][0]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l==17 & l+m==18 & l+m+q==19) 
                      Dg=(F8*AC[ii][0]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l==20 & l+m==21 & l+m+q==22) 
                      Dg=(F8*AC[ii][0]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l==23 & l+m==24 & l+m+q==25) 
                      Dg=(F8*AC[ii][0]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                   if (l==26 & l+m==27 & l+m+q==28) 
                      Dg=(F8*AC[ii][0]+F9*AC[ii][1]+F10*AC[ii][2])/100;
                      }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F4/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                    z=j+1+k; 
                    w=l+1+m;
                    ww=l+1+m+q;
                    /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                    if (Errorel>=t & Errorel<=u & ((G[1][j+1]<52 & G[6][j+1]>G1 & l==0 & 
                       (m==3 & (q==10||q==11||q==12||q==13) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas e Grupo 1*/
                        m==4 & (q==9||q==10||q==11||q==12) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 & (q==8||q==9||q==10||q==11) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 & (q==7||q==8||q==9||q==10) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==7 & (q==6||q==7||q==8||q==9) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 & (q==5||q==6||q==7||q==8) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 & (q==4||q==5||q==6||q==7) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 & (q==3||q==4||q==5||q==6) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 & (q==2||q==3||q==4||q==5) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 & (q==1||q==2||q==3||q==4) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                    (G[1][j+1]<52 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==0 & (m==3 & (q==10||q==14||q==15||q==16) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas e Grupo 2*/
                        m==4 & (q==9||q==13||q==14||q==15) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 & (q==8||q==12||q==13||q==14) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 & (q==7||q==11||q==12||q==13) & oliv[j+1]>81 & oliv[j+1]<=82.5 || 
                        m==7 & (q==6||q==10||q==11||q==12) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 & (q==5||q==9||q==10||q==11) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 & (q==4||q==8||q==9||q==10) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 & (q==3||q==7||q==8||q==9) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 & (q==2||q==6||q==7||q==8) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 & (q==1||q==5||q==6||q==7) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                    (G[6][j+1]>G1 & G[1][j+1]<52 & l==0 & (m==13&(q==1||q==2||q==3) || m==14&(q==1||q==2) || m==15&q==1)) || /*Magnetita Básica com grupo 1 e apatita*/ 
                    (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]<52 & l==0 & (m==13&(q==4||q==5||q==6) || m==17&(q==1||q==2) || m==18&q==1)) || /*Magnetita Básica com grupo 2 e apatita*/ 
                    (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]<52 & l==0 & (m==13&(q==7||q==8||q==9) || m==20&(q==1||q==2) || m==21&q==1)) || /*Magnetita Básica com grupo 3 e apatita*/ 
                    (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]<52 & l==0 & (m==13&(q==10||q==11||q==12) || m==23&(q==1||q==2) || m==24&q==1)) || /*Magnetita Básica com grupo 4 e apatita*/ 
                    (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]>G1 & l==1 & (m==2 & (q==10||q==11||q==12||q==13) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita Intermediária com olivinas e Grupo 1*/
                        m==3 & (q==9||q==10||q==11||q==12) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 & (q==8||q==9||q==10||q==11) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 & (q==7||q==8||q==9||q==10) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 & (q==6||q==7||q==8||q==9) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 & (q==5||q==6||q==7||q==8) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 & (q==4||q==5||q==6||q==7) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 & (q==3||q==4||q==5||q==6) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 & (q==2||q==3||q==4||q==5) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 & (q==1||q==2||q==3||q==4) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                    (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==1 & (m==2 & (q==10||q==14||q==15||q==16) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita Intermediária com olivinas e Grupo 2*/
                        m==3 & (q==9||q==13||q==14||q==15) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 & (q==8||q==12||q==13||q==14) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 & (q==7||q==11||q==12||q==13) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 & (q==6||q==10||q==11||q==12) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 & (q==5||q==9||q==10||q==11) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 & (q==4||q==8||q==9||q==10) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 & (q==3||q==7||q==8||q==9) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 & (q==2||q==6||q==7||q==8) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 & (q==1||q==5||q==6||q==7) & oliv[j+1]>69 & oliv[j+1]<=72.5)) ||
                    (G[6][j+1]>G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1  & (m==12&(q==1||q==2||q==3) || m==13&(q==1||q==2) || m==14&q==1)) || /*Magnetita Intermediária com grupo 1 e apatita*/ 
                    (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==4||q==5||q==6) || m==16&(q==1||q==2) || m==17&q==1)) || /*Magnetita Intermediária com grupo 2 e apatita*/ 
                    (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==7||q==8||q==9) || m==19&(q==1||q==2) || m==20&q==1)) || /*Magnetita Intermediária com grupo 3 e apatita*/ 
                    (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==10||q==11||q==12) || m==22&(q==1||q==2) || m==23&q==1)) || /*Magnetita Intermediária com grupo 4 e apatita*/ 
                    (G[1][j+1]>63 & G[6][j+1]>G1 & l==2 & (m==1 & (q==10||q==11||q==12||q==13) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas e Grupo 1*/
                        m==2 & (q==9||q==10||q==11||q==12) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 & (q==8||q==9||q==10||q==11) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 & (q==7||q==8||q==9||q==10) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 & (q==6||q==7||q==8||q==9) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 & (q==5||q==6||q==7||q==8) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 & (q==4||q==5||q==6||q==7) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 & (q==3||q==4||q==5||q==6) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 & (q==2||q==3||q==4||q==5) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 & (q==1||q==2||q==3||q==4) & oliv[j+1]>69 & oliv[j+1]<=72.5 )) || 
                    (G[1][j+1]>63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==2 & (m==1 & (q==10||q==14||q==15||q==16) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas e Grupo 2*/
                        m==2 & (q==9||q==13||q==14||q==15) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 & (q==8||q==12||q==13||q==14) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 & (q==7||q==11||q==12||q==13) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 & (q==6||q==10||q==11||q==12) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 & (q==5||q==9||q==10||q==11) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 & (q==4||q==8||q==9||q==10) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 & (q==3||q==7||q==8||q==9) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 & (q==2||q==6||q==7||q==8) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 & (q==1||q==5||q==6||q==7) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                    (G[6][j+1]>G1 & G[1][j+1]>63 & l==2 & (m==11&(q==1||q==2||q==3) || m==12&(q==1||q==2) || m==13&q==1)) || /*Magnetita ácida com grupo 1 e apatita*/ 
                    (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>63 & l==2 & (m==11&(q==4||q==5||q==6) || m==15&(q==1||q==2) || m==16&q==1)) || /*Magnetita ácida com grupo 2 e apatita*/ 
                    (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]>63 & l==2 & (m==11&(q==7||q==8||q==9) || m==18&(q==1||q==2) || m==19&q==1)) || /*Magnetita ácida com grupo 3 e apatita*/ 
                    (G[6][j+1]<G4 & G[1][j+1]>63 & l==2 & (m==11&(q==13||q==14||q==15) || m==24&(q==1||q==2) || m==25&(q==1))) || /*Magnetita ácida com grupo 5 e apatita*/ 
                    (G[6][j+1]>G1 & (l==3 & oliv[j+1]>84.5 & oliv[j+1]<86 &(m==10&(q==1||q==2||q==3)||m==11&(q==1||q==2)||m==12&(q==1)) ||  /*Olivinas, apatita e grupo 1*/          
                        l==4 & oliv[j+1]>83.5 & oliv[j+1]<=84.5 & (m==9&(q==1||q==2||q==3)||m==10&(q==1||q==2)||m==11&(q==1)) ||
                        l==5 & oliv[j+1]>82.5 & oliv[j+1]<=83.5 & (m==8&(q==1||q==2||q==3)||m==9&(q==1||q==2)||m==10&(q==1)) ||
                        l==6 & oliv[j+1]>81 & oliv[j+1]<=82.5 & (m==7&(q==1||q==2||q==3)||m==8&(q==1||q==2)||m==9&(q==1)) ||
                        l==7 & oliv[j+1]>79 & oliv[j+1]<=81 & (m==6&(q==1||q==2||q==3)||m==7&(q==1||q==2)||m==8&(q==1)) ||
                        l==8 & oliv[j+1]>77.5 & oliv[j+1]<=79 & (m==5&(q==1||q==2||q==3)||m==6&(q==1||q==2)||m==7&(q==1)) ||
                        l==9 & oliv[j+1]>76.5 & oliv[j+1]<=77.5 & (m==4&(q==1||q==2||q==3)||m==5&(q==1||q==2)||m==6&(q==1)) ||
                        l==10 & oliv[j+1]>75.5 & oliv[j+1]<=76.5 & (m==3&(q==1||q==2||q==3)||m==4&(q==1||q==2)||m==5&(q==1)) ||
                        l==11 & oliv[j+1]>72.5 & oliv[j+1]<=75.5 & (m==2&(q==1||q==2||q==3)||m==3&(q==1||q==2)||m==4&(q==1)) ||
                        l==12 & oliv[j+1]>69 & oliv[j+1]<=72.5 & (m==1&(q==1||q==2||q==3)||m==2&(q==1||q==2)||m==3&(q==1)))) ||
                    (G[6][j+1]>G1 & (l==13 &(m==1&(q==1||q==2)||m==2&(q==1))||l==14 &(m==1&(q==1)))) || /*seleção do grupo 1*/
                    (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==3 & oliv[j+1]>84.5 & oliv[j+1]<86 & (m==10&(q==4||q==5||q==6)||m==14&(q==1||q==2)||m==15&(q==1)) || /*Olivinas com grupo 2 e apatita*/          
                        l==4 & oliv[j+1]>83.5 & oliv[j+1]<=84.5 & (m==9&(q==4||q==5||q==6)||m==13&(q==1||q==2)||m==14&(q==1)) ||
                        l==5 & oliv[j+1]>82.5 & oliv[j+1]<=83.5 & (m==8&(q==4||q==5||q==6)||m==12&(q==1||q==2)||m==13&(q==1)) ||
                        l==6 & oliv[j+1]>81 & oliv[j+1]<=82.5 & (m==7&(q==4||q==5||q==6)||m==11&(q==1||q==2)||m==12&(q==1)) ||
                        l==7 & oliv[j+1]>79 & oliv[j+1]<=81 & (m==6&(q==4||q==5||q==6)||m==10&(q==1||q==2)||m==11&(q==1)) ||
                        l==8 & oliv[j+1]>77.5 & oliv[j+1]<=79 & (m==5&(q==4||q==5||q==6)||m==9&(q==1||q==2)||m==10&(q==1)) ||
                        l==9 & oliv[j+1]>76.5 & oliv[j+1]<=77.5 & (m==4&(q==4||q==5||q==6)||m==8&(q==1||q==2)||m==9&(q==1)) ||
                        l==10 & oliv[j+1]>75.5 & oliv[j+1]<=76.5 & (m==3&(q==4||q==5||q==6)||m==7&(q==1||q==2)||m==8&(q==1)) ||
                        l==11 & oliv[j+1]>72.5 & oliv[j+1]<=75.5 & (m==2&(q==4||q==5||q==6)||m==6&(q==1||q==2)||m==7&(q==1)) ||
                        l==12 & oliv[j+1]>69 & oliv[j+1]<=72.5 & (m==1&(q==4||q==5||q==6)||m==5&(q==1||q==2)||m==6&(q==1)))) ||
                    (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==13 &(m==4&(q==1||q==2)||m==5&(q==1))||l==17 &(m==1&(q==1)))) || /*seleção do grupo 2*/
                    (G[6][j+1]<=G2 & G[6][j+1]>G3 & (l==13 &(m==7&(q==1||q==2)||m==8&(q==1))||l==20 &(m==1&(q==1)))) || /*seleção do grupo 3*/
                    (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<=63 & (l==13 &(m==10&(q==1||q==2)||m==11&(q==1))||l==23 &(m==1&(q==1)))) || /*seleção do grupo 4*/
                    (G[6][j+1]<=G4 & G[1][j+1]>63 & (l==13 &(m==13&(q==1||q==2)||m==14&(q==1))||l==26 &(m==1&(q==1)))))){ /*seleção do grupo 5*/
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+1]);
                        fprintf(arq_saida, " (%.2f", F8);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incr);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F9);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incs);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F10);
                        fprintf(arq_saida, " +/- %.2f)%%\n", inct);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F4);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                           if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }                                                    
                    }
                    }
                    }
                    }
                    }
                    }
    /*CÁLCULOS PARA FRACIONAMENTO DE QUATRO MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE QUATRO MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<20;l++){
        p++;
        r=-1;
        for(m=1;m<(27-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(26-r);q++){
            rr++;
            for(v=1;v<(19-rr);v++){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=0;
              /*Seleção Para Diminuir o Tempo de Cálculo*/
              if (l==0 & (m==3&q>=10&q<=16 || m==4&q>=9&q<=15 || m==5&q>=8&q<=14 || m==6&q>=7&q<=13 ||m==7&q>=6&q<=12 || m==8&q>=5&q<=11 || m==9&q>=4&q<=10 || m==10&q>=3&q<=9 ||m==11&q>=2&q<=8 || m==12&q>=1&q<=7 ||
                          m==13&(q==1||q==2||q==4||q==5||q==7||q==8||q==10||q==11||q==13||q==14||q==15) || m==14&q==1 || m==17&q==1 || m==20&q==1 ||m==23&q==1 || m==26&(q==1||q==2)) || l==1 & (m==2&q>=10&q<=16 || 
                          m==3&q>=9&q<=15 || m==4&q>=8&q<=14 || m==5&q>=7&q<=13 ||m==6&q>=6&q<=12 || m==7&q>=5&q<=11 || m==8&q>=4&q<=10 || m==9&q>=3&q<=9 ||m==10&q>=2&q<=8 || m==11&q>=7 || m==12&(q==1||q==2||q==4||q==5||q==7||q==8||q==10||q==11||q==13||q==14||q==15) ||
                          m==13&q==1 || m==16&q==1 || m==19&q==1 ||m==22&q==1 || m==25&(q==1||q==2)) || l==2 & (m==1&q>=10&q<=16 || m==2&q>=9&q<=15 || m==3&q>=8&q<=14 || m==4&q>=7&q<=13 ||m==5&q>=6&q<=12 || m==6&q>=5&q<=11 || m==7&q>=4&q<=10 || m==8&q>=3&q<=9 ||m==9&q>=2&q<=8 ||
                          m==10&q>=1&q<=7|| m==11&(q==1||q==2||q==4||q==5||q==7||q==8||q==10||q==11||q==13||q==14||q==15) || m==12&q==1 || m==15&q==1 || m==18&q==1 ||m==21&q==1 || m==24&(q==1||q==2)) || (l==3&m>=10&m<=15) || (l==4&m>=9&m<=14) || (l==5&m>=8&m<=13) ||
                          (l==6&m>=7&m<=13) || (l==7&m>=6&m<=12) || (l==8&m>=5&m<=11) || (l==9&m>=4&m<=10) || (l==10&m>=3&m<=9) || (l==11&m>=2&m<=8) || (l==12&m>=1&m<=7) || (l==13&(m==1||m==4||m==7||m==10||m==13||m==14)))
                          {           
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                      
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][l];/*Vetor fase mineral*/
                    mine2[i]=B[i][l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][l+m+q+v];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v6[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v7[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v8[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v9[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v10[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v11[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v12[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v13[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v14[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v15[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v16[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v17[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v18[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v19[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v20[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v21[i]=C[4][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v22[i]=C[4][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v23[i]=C[4][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v24[i]=C[4][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v25[i]=C[4][4]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[1][0]=v6[i];
                    C[1][1]=v7[i];
                    C[1][2]=v8[i];
                    C[1][3]=v9[i];
                    C[1][4]=v10[i];
                    C[2][0]=v11[i];
                    C[2][1]=v12[i];
                    C[2][2]=v13[i];
                    C[2][3]=v14[i];
                    C[2][4]=v15[i];
                    C[3][0]=v16[i];
                    C[3][1]=v17[i];
                    C[3][2]=v18[i];
                    C[3][3]=v19[i];
                    C[3][4]=v20[i];
                    C[4][0]=v21[i];
                    C[4][1]=v22[i];
                    C[4][2]=v23[i];
                    C[4][3]=v24[i];
                    C[4][4]=v25[i];
                    }
                for (zz=0;zz<5;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][5]=1;
                    C[1][5]=C[2][5]=C[3][5]=C[4][5]=0;
                    }
                    if (zz==1){
                    C[0][5]=0;
                    C[1][5]=1;
                    C[2][5]=C[3][5]=C[4][5]=0;
                    }
                    if (zz==2){
                    C[0][5]=C[1][5]=0;
                    C[2][5]=1;
                    C[3][5]=C[4][5]=0;
                    }
                    if (zz==3){
                    C[0][5]=C[1][5]=C[2][5]=0;
                    C[3][5]=1;
                    C[4][5]=0;
                    }
                    if (zz==4){
                    C[0][5]=C[1][5]=C[2][5]=C[3][5]=0;
                    C[4][5]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    for (ii=1;ii<5;ii++){
                        for (jj=0;jj<6;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[5]=Da[2][1]/Da[1][1];
                    pivo[6]=Da[3][1]/Da[1][1];
                    pivo[7]=Da[4][1]/Da[1][1];
                    for (ii=2;ii<5;ii++){
                        for (jj=1;jj<6;jj++){
                        Db[ii][jj]=(-1*pivo[ii+3]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[8]=Db[3][2]/Db[2][2];
                    pivo[9]=Db[4][2]/Db[2][2];
                    for (ii=3;ii<5;ii++){
                        for (jj=2;jj<6;jj++){
                        Dc[ii][jj]=(-pivo[ii+5]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[10]=Dc[4][3]/Dc[3][3];
                    for (ii=4;ii<5;ii++){
                        for (jj=3;jj<6;jj++){
                        Dd[ii][jj]=(-pivo[ii+6]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    D[4][zz]=Dd[4][5]/Dd[4][4];
                    D[3][zz]=(Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inck=incl=incm=incn=0;
                    for(i=0;i<10;i++){
                    v26[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v26a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine1[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine1[i]*solliq[i]/10000;
                    v27[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v27a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine2[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine2[i]*solliq[i]/10000;
                    v28[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v28a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine3[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine3[i]*solliq[i]/10000;
                    v29[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v29a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine4[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine4[i]*solliq[i]/10000;
                    v30[i]=E[4][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v30a[i]=E[14][14]+(liq[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v26[i];/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    E[10][10]=v26a[i];
                    incb=INCB[i];
                    E[1][0]=v27[i];
                    E[11][11]=v27a[i];
                    incc=INCC[i];
                    E[2][0]=v28[i];
                    E[12][12]=v28a[i];
                    incd=INCD[i];
                    E[3][0]=v29[i];
                    E[13][13]=v29a[i];
                    incf=INCF[i];
                    E[4][0]=v30[i];
                    E[14][14]=v30a[i];
                    incg=INCG[i];
                    }
                    F5=(D[4][0]*E[0][0]+D[4][1]*E[1][0]+D[4][2]*E[2][0]+D[4][3]*E[3][0]+D[4][4]*E[4][0])*100;/*Fração Subtraída do magma inicial*/
                    inct=sqrt(incb)*D[4][0]*E[10][10];
                    incu=sqrt(incc)*D[4][1]*E[11][11];
                    incv=sqrt(incd)*D[4][2]*E[12][12];
                    incx=sqrt(incf)*D[4][3]*E[13][13];
                    incz=sqrt(incg)*D[4][4]*E[14][14];                    
                    incw=sqrt(inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM FRACIONADA DE CADA MINERAL*/
                if (F5<0 & F5>-100){ /*Condição para evitar cálculos desnecessário*/
                    for(i=0;i<10;i++){
                    v31[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v32[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v33[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v34[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v35[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v36[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v37[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v38[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v39[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v40[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v41[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v42[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v43[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    H[0][0]=v31[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v32[i];
                    H[0][2]=v33[i];
                    H[0][3]=v34[i];
                    H[1][0]=v35[i];
                    H[1][1]=v36[i];
                    H[1][2]=v37[i];
                    H[1][3]=v38[i];
                    H[2][0]=v39[i];
                    H[2][1]=v40[i];
                    H[2][2]=v41[i];
                    H[2][3]=v42[i];
                    H[3][0]=v43[i];
                    H[3][1]=v44[i];
                    H[3][2]=v45[i];
                    H[3][3]=v46[i];/*Inversa do produto da matriz transposta pela matriz*/
                    }
                for (pp=0;pp<4;pp++){
                    if (pp==0){
                    H[0][4]=1;
                    H[1][4]=H[2][4]=H[3][4]=0;
                    }
                    if (pp==1){
                    H[0][4]=0;
                    H[1][4]=1;
                    H[2][4]=H[3][4]=0;
                    }
                    if (pp==2){
                    H[0][4]=H[1][4]=0;
                    H[2][4]=1;
                    H[3][4]=0;
                    }
                    if (pp==3){
                    H[0][4]=H[1][4]=H[2][4]=0;
                    H[3][4]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    for (ii=1;ii<4;ii++){
                        for (jj=0;jj<5;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[4]=Ia[2][1]/Ia[1][1];
                    pivo[5]=Ia[3][1]/Ia[1][1];
                    for (ii=2;ii<4;ii++){
                        for (jj=1;jj<5;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+2]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[6]=Ib[3][2]/Ib[2][2];
                    for (ii=3;ii<4;ii++){
                        for (jj=2;jj<5;jj++){
                        Ic[ii][jj]=(-pivo[ii+3]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    I[3][pp]=Ic[3][4]/Ic[3][3];
                    I[2][pp]=(Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F5/100)/((-1)*F5/100);
                    inch=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inci=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F5/100;
                    incj=sqrt(inci*inci+inch*inch);
                    INCH[i]=sqrt(incj*incj+incw*incw/10000)*cum[i]/100;
                    v47[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v47a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCK[i]=inck+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine1[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine1[i]*cum[i]/10000;
                    v48[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v48a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCL[i]=incl+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine2[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine2[i]*cum[i]/10000;
                    v49[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v49a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCM[i]=incm+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine3[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine3[i]*cum[i]/10000;
                    v50[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v50a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine4[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine4[i]*cum[i]/10000;
                    J[0][0]=v47[i];
                    J[10][10]=v47a[i];
                    inck=INCK[i];
                    J[1][0]=v48[i];
                    J[11][11]=v48a[i];
                    incl=INCL[i];
                    J[2][0]=v49[i];
                    J[12][12]=v49a[i];
                    incm=INCM[i];
                    J[3][0]=v50[i];
                    J[13][13]=v50a[i];
                    incn=INCN[i];
                    }
                    F6=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]);/*Fração cristalizada*/
                    inco=sqrt(inck)*J[10][10];
                    incp=sqrt(incl)*J[11][11];
                    incq=sqrt(incm)*J[12][12];
                    incr=sqrt(incn)*J[13][13];
                    incs=sqrt(inco*inco+incp*incp+incq*incq+incr*incr);
                    F7=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]);
                    F8=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]);
                    F9=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]);
                    ML=(1-F6-F7-F8-F9)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[3][0]+I[3][1]+I[3][2]+I[3][3]); /*Multiplicador de Lagrange*/
                    inct=sqrt(incs*incs*4)*ML;
                    F10=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3])+F6)*100; /*Fração Mineral 1*/
                    incu=sqrt(incs*incs+inct*inct)*F10; /*incerteza mineral 1*/
                    F11=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3])+F7)*100; /*Fração Mineral 2*/
                    incv=sqrt(incs*incs+inct*inct)*F11; /*incerteza mineral 2*/
                    F12=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3])+F8)*100; /*Fração Mineral 3*/
                    incx=sqrt(incs*incs+inct*inct)*F12;
                    F13=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3])+F9)*100; /*Fração Mineral 4*/
                    incz=sqrt(incs*incs+inct*inct)*F13; /*incerteza mineral 3*/
                    }
                if (F5<0 & F5>-100 & F10>0 & F11>0 & F12>0 & F13>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos elementos maiores e menores*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][l]*F10*F5)/10000+(B[i][l+m]*F11*F5)/10000+(B[i][l+m+q]*F12*F5)/10000+(B[i][l+m+q+v]*F13*F5)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F5);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                      
                if (Errorel>=t & Errorel<=u){
                if (opcao1==1){
                err=0;
                for(ii=0;ii<22;ii++){ /*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){ /*COEFICIENTE DE PARTIÇÃO BÁSICO E INTERMEDIÁRIO*/
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & (l+m+q+v==14||l+m+q+v==17||l+m+q+v==20||l+m+q+v==23||l+m+q+v==26)) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][5]+F13*BAS[ii][1])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & (l+m+q+v==15||l+m+q+v==18||l+m+q+v==21||l+m+q+v==24||l+m+q+v==27)) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][5]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & (l+m+q+v==16||l+m+q+v==19||l+m+q+v==22||l+m+q+v==25||l+m+q+v==28)) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][5]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==14 & l+m+q+v==15) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==14 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==17 & l+m+q+v==18) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==17 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][0]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==15) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==18) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==21) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==22) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==21 & l+m+q+v==22) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==24) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==25) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==24 & l+m+q+v==25) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==27) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==28) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==27 & l+m+q+v==28) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==21 & l+m+q+v==22) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==24 & l+m+q+v==25) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==27 & l+m+q+v==28) 
                      Dg=(F10*BAS[ii][4]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==14 & l+m+q+v==15) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==14 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;    
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==17 & l+m+q+v==18) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][2])/100;
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==17 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][1]+F13*BAS[ii][3])/100;    
                   if (l>=3 & l<=12 & l+m==13 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][5]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;   
                   if (l>=3 & l<=12 & l+m==14 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l>=3 & l<=12 & l+m==17 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*BAS[ii][0]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;
                   if (l==13 & (l+m==14||l+m==17||l+m==20||l+m==23||l+m==26) & (l+m+q==15||l+m+q==18||l+m+q==21||l+m+q==24||l+m+q==27) & (l+m+q+v==16||l+m+q+v==19||l+m+q+v==22||l+m+q+v==25||l+m+q+v==28)) 
                      Dg=(F10*BAS[ii][5]+F11*BAS[ii][1]+F12*BAS[ii][2]+F13*BAS[ii][3])/100;   
                   }
                  if (G[1][j+1]>=63){  /*COEFICIENTE DE PARTIÇÃO ÁCIDO*/
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==15) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==16) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][1]+F13*AC[ii][2])/100;  
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==18) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==19) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][1]+F13*AC[ii][2])/100;   
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==21) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==22) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==21 & l+m+q+v==22) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][1]+F13*AC[ii][2])/100;  
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==24) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==25) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==24 & l+m+q+v==25) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][1]+F13*AC[ii][2])/100; 
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==27) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][1])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==28) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][0]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==27 & l+m+q+v==28) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][4]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==14 & l+m+q==15 & l+m+q+v==16) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==17 & l+m+q==18 & l+m+q+v==19) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==20 & l+m+q==21 & l+m+q+v==22) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==23 & l+m+q==24 & l+m+q+v==25) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==26 & l+m+q==27 & l+m+q+v==28) 
                      Dg=(F10*AC[ii][3]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                   if (l==13 & (l+m==14||l+m==17||l+m==20||l+m==23||l+m==26) & (l+m+q==15||l+m+q==18||l+m+q==21||l+m+q==24||l+m+q==27) & (l+m+q+v==16||l+m+q+v==19||l+m+q+v==22||l+m+q+v==25||l+m+q+v==28)) 
                      Dg=(F10*AC[ii][4]+F11*AC[ii][0]+F12*AC[ii][1]+F13*AC[ii][2])/100;
                      }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F5/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+1+m;
                   ww=l+1+m+q;
                   www=l+1+m+q+v;
                   /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                   if (Errorel>=t & Errorel<=u & ((G[1][j+1]<52 & G[6][j+1]>G1 & l==0 & 
                       (m==3 &(q==10&(v==1||v==2||v==3)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas, apatita e Grupo 1*/
                        m==4 &(q==9&(v==1||v==2||v==3)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 &(q==8&(v==1||v==2||v==3)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 &(q==7&(v==1||v==2||v==3)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==7 &(q==6&(v==1||v==2||v==3)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 &(q==5&(v==1||v==2||v==3)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 &(q==4&(v==1||v==2||v==3)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 &(q==3&(v==1||v==2||v==3)||q==4&(v==1||v==2)||q==5&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 &(q==2&(v==1||v==2||v==3)||q==3&(v==1||v==2)||q==4&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 &(q==1&(v==1||v==2||v==3)||q==2&(v==1||v==2)||q==3&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[1][j+1]<52 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==0 & (m==3 &(q==10&(v==4||v==5||v==6)||q==14&(v==1||v==2)||q==15&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas, apatita e Grupo 2*/
                        m==4 &(q==9&(v==4||v==5||v==6)||q==13&(v==1||v==2)||q==14&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 &(q==8&(v==4||v==5||v==6)||q==12&(v==1||v==2)||q==13&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 &(q==7&(v==4||v==5||v==6)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==7 &(q==6&(v==4||v==5||v==6)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 &(q==5&(v==4||v==5||v==6)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 &(q==4&(v==4||v==5||v==6)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 &(q==3&(v==4||v==5||v==6)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 &(q==2&(v==4||v==5||v==6)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 &(q==1&(v==4||v==5||v==6)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[6][j+1]>G1 & G[1][j+1]<52 & l==0 & (m==13&(q==1&(v==1||v==2)||q==2&(v==1)) || m==14&(q==1&(v==1)))) || /*Magnetita Básica com grupo 1 e apatita*/ 
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]<52 & l==0 & (m==13&(q==4&(v==1||v==2)||q==5&(v==1)) || m==17&(q==1&(v==1)))) || /*Magnetita Básica com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]<52 & l==0  & (m==13&(q==7&(v==1||v==2)||q==8&(v==1)) || m==20&(q==1&(v==1)))) || /*Magnetita Básica com grupo 3 e apatita*/ 
                   (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]<52 & l==0  & (m==13&(q==10&(v==1||v==2)||q==11&(v==1)) || m==23&(q==1&(v==1)))) || /*Magnetita Básica com grupo 4 e apatita*/   
                   (G[6][j+1]>G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==1&(v==1||v==2)||q==2&(v==1)) || m==13&(q==1&(v==1)))) || /*Magnetita Intermediária com grupo 1 e apatita*/     
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==4&(v==1||v==2)||q==5&(v==1)) || m==16&(q==1&(v==1)))) || /*Magnetita Intermediária com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G4 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==7&(v==1||v==2)||q==8&(v==1)) || m==19&(q==1&(v==1)))) || /*Magnetita Intermediária com grupo 3 e apatita*/ 
                   (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&(q==10&(v==1||v==2)||q==11&(v==1)) || m==22&(q==1&(v==1)))) || /*Magnetita Intermediária com grupo 4 e apatita*/ 
                   (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]>G1 & l==1 & (m==2 &(q==10&(v==1||v==2||v==3)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita intermediária com olivinas, apatita e Grupo 1*/
                        m==3 &(q==9&(v==1||v==2||v==3)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 &(q==8&(v==1||v==2||v==3)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 &(q==7&(v==1||v==2||v==3)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 &(q==6&(v==1||v==2||v==3)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 &(q==5&(v==1||v==2||v==3)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 &(q==4&(v==1||v==2||v==3)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 &(q==3&(v==1||v==2||v==3)||q==4&(v==1||v==2)||q==5&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 &(q==2&(v==1||v==2||v==3)||q==3&(v==1||v==2)||q==4&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 &(q==1&(v==1||v==2||v==3)||q==2&(v==1||v==2)||q==3&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5 )) || 
                   (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==1 & (m==2 &(q==10&(v==4||v==5||v==6)||q==14&(v==1||v==2)||q==15&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 ||
                        m==3 &(q==9&(v==4||v==5||v==6)||q==13&(v==1||v==2)||q==14&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 &(q==8&(v==4||v==5||v==6)||q==12&(v==1||v==2)||q==13&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 &(q==7&(v==4||v==5||v==6)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 &(q==6&(v==4||v==5||v==6)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 &(q==5&(v==4||v==5||v==6)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 &(q==4&(v==4||v==5||v==6)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 &(q==3&(v==4||v==5||v==6)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 &(q==2&(v==4||v==5||v==6)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 &(q==1&(v==4||v==5||v==6)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || /*Magnetita intermediária com olivinas, apatita e Grupo 2*/
                   (G[6][j+1]>G1 & G[1][j+1]>63 & l==2 & (m==11&(q==1&(v==1||v==2)||q==2&(v==1)) || m==12&(q==1&(v==1)))) || /*Magnetita ácida com grupo 1 e apatita*/ 
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>63 & l==2 & (m==11&(q==4&(v==1||v==2)||q==5&(v==1)) || m==15&(q==1&(v==1)))) || /*Magnetita ácida com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]>63 & l==2 & (m==11&(q==7&(v==1||v==2)||q==8&(v==1)) || m==18&(q==1&(v==1)))) || /*Magnetita ácida com grupo 3 e apatita*/ 
                   (G[6][j+1]<G4 & G[1][j+1]>63 & l==2 & (m==11&(q==13&(v==1||v==2||v==3)||q==14&(v==1||v==2)||q==15&(v==1)) || m==24&(q==1&(v==1)) || m==25&(q==1))) || /*Magnetita ácida com grupo 5 e apatita*/ 
                   (G[1][j+1]>63 & G[6][j+1]>G1 & l==2 & (m==1  &(q==10&(v==1||v==2||v==3)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas, apatita e Grupo 1*/
                        m==2 &(q==9&(v==1||v==2||v==3)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 &(q==8&(v==1||v==2||v==3)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 &(q==7&(v==1||v==2||v==3)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 &(q==6&(v==1||v==2||v==3)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 &(q==5&(v==1||v==2||v==3)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 &(q==4&(v==1||v==2||v==3)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 &(q==3&(v==1||v==2||v==3)||q==4&(v==1||v==2)||q==5&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 &(q==2&(v==1||v==2||v==3)||q==3&(v==1||v==2)||q==4&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 &(q==1&(v==1||v==2||v==3)||q==2&(v==1||v==2)||q==3&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[1][j+1]>63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==2 & (m==1 &(q==10&(v==4||v==5||v==6)||q==14&(v==1||v==2)||q==15&(v==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas, apatita e Grupo 2*/
                        m==2 &(q==9&(v==4||v==5||v==6)||q==13&(v==1||v==2)||q==14&(v==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 &(q==8&(v==4||v==5||v==6)||q==12&(v==1||v==2)||q==13&(v==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 &(q==7&(v==4||v==5||v==6)||q==11&(v==1||v==2)||q==12&(v==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 &(q==6&(v==4||v==5||v==6)||q==10&(v==1||v==2)||q==11&(v==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 &(q==5&(v==4||v==5||v==6)||q==9&(v==1||v==2)||q==10&(v==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 &(q==4&(v==4||v==5||v==6)||q==8&(v==1||v==2)||q==9&(v==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 &(q==3&(v==4||v==5||v==6)||q==7&(v==1||v==2)||q==8&(v==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 &(q==2&(v==4||v==5||v==6)||q==6&(v==1||v==2)||q==7&(v==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 &(q==1&(v==4||v==5||v==6)||q==5&(v==1||v==2)||q==6&(v==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[6][j+1]>G1 & (l==3 & oliv[j+1]>84.5 & oliv[j+1]<86 & (m==10&(q==1&(v==1||v==2)||q==2&(v==1))||m==11&(q==1&(v==1))) ||  /*Olivinas com grupo 1 e apatita*/          
                        l==4&oliv[j+1]>83.5 & oliv[j+1]<=84.5 & (m==9&(q==1&(v==1||v==2)||q==2&(v==1))||m==10&(q==1&(v==1))) ||
                        l==5&oliv[j+1]>82.5 & oliv[j+1]<=83.5 & (m==8&(q==1&(v==1||v==2)||q==2&(v==1))||m==9&(q==1&(v==1))) ||
                        l==6&oliv[j+1]>81 & oliv[j+1]<=82.5 & (m==7&(q==1&(v==1||v==2)||q==2&(v==1))||m==8&(q==1&(v==1))) ||
                        l==7&oliv[j+1]>79 & oliv[j+1]<=81 & (m==6&(q==1&(v==1||v==2)||q==2&(v==1))||m==7&(q==1&(v==1))) || 
                        l==8&oliv[j+1]>77.5 & oliv[j+1]<=79 & (m==5&(q==1&(v==1||v==2)||q==2&(v==1))||m==6&(q==1&(v==1))) ||
                        l==9&oliv[j+1]>76.5 & oliv[j+1]<=77.5 & (m==4&(q==1&(v==1||v==2)||q==2&(v==1))||m==5&(q==1&(v==1))) ||
                        l==10&oliv[j+1]>75.5 & oliv[j+1]<=76.5 & (m==3&(q==1&(v==1||v==2)||q==2&(v==1))||m==4&(q==1&(v==1))) ||
                        l==11&oliv[j+1]>72.5 & oliv[j+1]<=75.5 & (m==2&(q==1&(v==1||v==2)||q==2&(v==1))||m==3&(q==1&(v==1))) ||
                        l==12&oliv[j+1]>69 & oliv[j+1]<=72.5 & (m==1&(q==1&(v==1||v==2)||q==2&(v==1))||m==2&(q==1&(v==1))))) ||
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & (l==3 & oliv[j+1]>84.5 & oliv[j+1]<86 & (m==10&(q==4&(v==1||v==2)||q==5&(v==1))||m==14&(q==1&(v==1))) ||  /*Olivinas com grupo 2 e apatita*/          
                        l==4&oliv[j+1]>83.5 & oliv[j+1]<=84.5&(m==9&(q==4&(v==1||v==2)||q==5&(v==1))||m==13&(q==1&(v==1))) ||
                        l==5&oliv[j+1]>82.5 & oliv[j+1]<=83.5&(m==8&(q==4&(v==1||v==2)||q==5&(v==1))||m==12&(q==1&(v==1))) ||
                        l==6&oliv[j+1]>81 & oliv[j+1]<=82.5&(m==7&(q==4&(v==1||v==2)||q==5&(v==1))||m==11&(q==1&(v==1))) ||
                        l==7&oliv[j+1]>79 & oliv[j+1]<=81&(m==6&(q==4&(v==1||v==2)||q==5&(v==1))||m==10&(q==1&(v==1))) ||
                        l==8&oliv[j+1]>77.5 & oliv[j+1]<=79&(m==5&(q==4&(v==1||v==2)||q==5&(v==1))||m==9&(q==1&(v==1))) ||
                        l==9&oliv[j+1]>76.5 & oliv[j+1]<=77.5&(m==4&(q==4&(v==1||v==2)||q==5&(v==1))||m==8&(q==1&(v==1))) ||
                        l==10&oliv[j+1]>75.5 & oliv[j+1]<=76.5&(m==3&(q==4&(v==1||v==2)||q==5&(v==1))||m==7&(q==1&(v==1))) ||
                        l==11&oliv[j+1]>72.5 & oliv[j+1]<=75.5&(m==2&(q==4&(v==1||v==2)||q==5&(v==1))||m==6&(q==1&(v==1))) ||
                        l==12&oliv[j+1]>69 & oliv[j+1]<=72.5 &(m==1&(q==4&(v==1||v==2)||q==5&(v==1))||m==5&(q==1&(v==1))))) ||
                   (G[6][j+1]>G1 & (l==13&m==1&q==1&v==1)) ||  /*seleção do grupo 1 e apatita*/
                   (G[6][j+1]<=G1 & G[6][j+1]>G2 & (l==13&m==4&q==1&v==1)) || /*seleção do grupo 2 e apatita*/
                   (G[6][j+1]<=G2 & G[6][j+1]>G3 & (l==13&m==7&q==1&v==1)) || /*seleção do grupo 3 e apatita*/
                   (G[6][j+1]<=G3 & G[6][j+1]>G4 & G[1][j+1]<=63 & (l==13&m==10&q==1&v==1)) || /*seleção do grupo 4 e apatita*/
                   (G[6][j+1]<=G4 & G[1][j+1]>63 & (l==13&(m==13&(q==1&v==1)))))){ /*seleção do grupo 5 e apatita*/
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+1]);
                        fprintf(arq_saida, " (%.2f", F10);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incu);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F11);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incv);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F12);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incx);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F13);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incz);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F5);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){    /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }                                          
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
    /*CÁLCULOS PARA FRACIONAMENTO DE CINCO MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE CINCO MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<17;l++){
        p++;
        r=-1;
        for(m=1;m<(18-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(18-r);q++){
            rr++;
            rrr=-1;
            for(v=1;v<(8-rr);v++){
              rrr++;
              for(vv=1;vv<(5-rrr);vv++){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[0][5]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[1][5]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[2][5]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[3][5]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=C[4][5]=C[5][0]=C[5][1]=C[5][2]=C[5][3]=C[5][4]=C[5][5]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=E[5][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=E[15][15]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[0][4]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[1][4]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[2][4]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=H[3][4]=H[4][0]=H[4][1]=H[4][2]=H[4][3]=H[4][4]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=J[4][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=J[14][14]=0;
                    /*Seleção Para Diminuir o Tempo de Cálculo*/
                    if (l==0 & (m==3&(q==10&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==11&(v==1&vv==1))||m==4&(q==9&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==10&(v==1&vv==1))||m==5&(q==8&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==9&(v==1&vv==1))||m==6&(q==7&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==8&(v==1&vv==1))||m==7&(q==6&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==7&(v==1&vv==1))||m==8&(q==5&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==6&(v==1&vv==1))||m==9&(q==4&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==5&(v==1&vv==1))||m==10&(q==3&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==4&(v==1&vv==1))||m==11&(q==2&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==3&(v==1&vv==1))||m==12&(q==1&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==2&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==0 & (m==3&(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&(v==1&vv==1))||m==4&(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&(v==1&vv==1))||m==5&(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&(v==1&vv==1))||m==6&(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&(v==1&vv==1))||m==7&(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&(v==1&vv==1))||m==8&(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&(v==1&vv==1))||m==9&(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&(v==1&vv==1))||m==10&(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&(v==1&vv==1))||m==11&(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&(v==1&vv==1))||m==12&(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==0 & (m==13&(q==1&v==1&vv==1||q==4&v==1&vv==1||q==7&v==1&vv==1||q==10&v==1&vv==1||q==13&(v==1&(vv==1||vv==2)||v==2&vv==1)))||
                        l==1 & (m==2&(q==10&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==11&(v==1&vv==1))||m==3&(q==9&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==10&(v==1&vv==1))||m==4&(q==8&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==9&(v==1&vv==1))||m==5&(q==7&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==8&(v==1&vv==1))||m==6&(q==6&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==7&(v==1&vv==1))||m==7&(q==5&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==6&(v==1&vv==1))||m==8&(q==4&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==5&(v==1&vv==1))||m==9&(q==3&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==4&(v==1&vv==1))||m==10&(q==2&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==3&(v==1&vv==1))||m==11&(q==1&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==2&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==1 & (m==2&(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&(v==1&vv==1))||m==3&(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&(v==1&vv==1))||m==4&(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&(v==1&vv==1))||m==5&(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&(v==1&vv==1))||m==6&(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&(v==1&vv==1))||m==7&(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&(v==1&vv==1))||m==8&(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&(v==1&vv==1))||m==9&(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&(v==1&vv==1))||m==10&(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&(v==1&vv==1))||m==11&(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==1 & (m==12&(q==1&v==1&vv==1||q==4&v==1&vv==1||q==7&v==1&vv==1||q==10&v==1&vv==1||q==13&(v==1&(vv==1||vv==2)||v==2&vv==1)))||
                        l==2 & (m==1&(q==10&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==11&(v==1&vv==1))||m==2&(q==9&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==10&(v==1&vv==1))||m==3&(q==8&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==9&(v==1&vv==1))||m==4&(q==7&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==8&(v==1&vv==1))||m==5&(q==6&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==7&(v==1&vv==1))||m==6&(q==5&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==6&(v==1&vv==1))||m==7&(q==4&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==5&(v==1&vv==1))||m==8&(q==3&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==4&(v==1&vv==1))||m==9&(q==2&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==3&(v==1&vv==1))||m==10&(q==1&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==2&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==2 & (m==1&(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&(v==1&vv==1))||m==2&(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&(v==1&vv==1))||m==3&(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&(v==1&vv==1))||m==4&(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&(v==1&vv==1))||m==5&(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&(v==1&vv==1))||m==6&(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&(v==1&vv==1))||m==7&(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&(v==1&vv==1))||m==8&(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&(v==1&vv==1))||m==9&(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&(v==1&vv==1))||m==10&(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&(v==1&vv==1)))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==2 & (m==11&(q==1&v==1&vv==1||q==4&v==1&vv==1||q==7&v==1&vv==1||q==10&v==1&vv==1||q==13&(v==1&(vv==1||vv==2)||v==2&vv==1)))||
                        l==3 & (m==10&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==4 & (m==9&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==5 & (m==8&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==6 & (m==7&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==7 & (m==6&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==8 & (m==5&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==9 & (m==4&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==10 & (m==3&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==11 & (m==2&(q==1&v==1&vv==1||q==4&v==1&vv==1))||
                        l==12 & (m==1&(q==1&v==1&vv==1||q==4&v==1&vv==1))){
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*Incertezas dos óxidos*/                                                 
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][l];/*Vetor fase mineral*/
                    mine2[i]=B[i][l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][l+m+q+v];/*Vetor fase mineral*/
                    mine5[i]=B[i][l+m+q+v+vv];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v6[i]=C[0][5]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v7[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v8[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v9[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v10[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v11[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v12[i]=C[1][5]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v13[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v14[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v15[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v16[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v17[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v18[i]=C[2][5]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v19[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v20[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v21[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v22[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v23[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v24[i]=C[3][5]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v25[i]=C[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v26[i]=C[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v27[i]=C[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v28[i]=C[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v29[i]=C[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v30[i]=C[4][5]+(mine5[i]*INC[i]*INC[i]*liq[i]/10000);
                    v31[i]=C[5][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v32[i]=C[5][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v33[i]=C[5][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v34[i]=C[5][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v35[i]=C[5][4]+(liq[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v36[i]=C[5][5]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[0][5]=v6[i];
                    C[1][0]=v7[i];
                    C[1][1]=v8[i];
                    C[1][2]=v9[i];
                    C[1][3]=v10[i];
                    C[1][4]=v11[i];
                    C[1][5]=v12[i];
                    C[2][0]=v13[i];
                    C[2][1]=v14[i];
                    C[2][2]=v15[i];
                    C[2][3]=v16[i];
                    C[2][4]=v17[i];
                    C[2][5]=v18[i];
                    C[3][0]=v19[i];
                    C[3][1]=v20[i];
                    C[3][2]=v21[i];
                    C[3][3]=v22[i];
                    C[3][4]=v23[i];
                    C[3][5]=v24[i];
                    C[4][0]=v25[i];
                    C[4][1]=v26[i];
                    C[4][2]=v27[i];
                    C[4][3]=v28[i];
                    C[4][4]=v29[i];
                    C[4][5]=v30[i];
                    C[5][0]=v31[i];
                    C[5][1]=v32[i];
                    C[5][2]=v33[i];
                    C[5][3]=v34[i];
                    C[5][4]=v35[i];
                    C[5][5]=v36[i];
                    }
                for (zz=0;zz<6;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][6]=1;
                    C[1][6]=C[2][6]=C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==1){
                    C[0][6]=0;
                    C[1][6]=1;
                    C[2][6]=C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==2){
                    C[0][6]=C[1][6]=0;
                    C[2][6]=1;
                    C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==3){
                    C[0][6]=C[1][6]=C[2][6]=0;
                    C[3][6]=1;
                    C[4][6]=C[5][6]=0;
                    }
                    if (zz==4){
                    C[0][6]=C[1][6]=C[2][6]=C[3][6]=0;
                    C[4][6]=1;
                    C[5][6]=0;
                    }
                    if (zz==5){
                    C[0][6]=C[1][6]=C[2][6]=C[3][6]=C[4][6]=0;
                    C[5][6]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    pivo[5]=C[5][0]/C[0][0];
                    for (ii=1;ii<6;ii++){
                        for (jj=0;jj<7;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[6]=Da[2][1]/Da[1][1];
                    pivo[7]=Da[3][1]/Da[1][1];
                    pivo[8]=Da[4][1]/Da[1][1];
                    pivo[9]=Da[5][1]/Da[1][1];
                    for (ii=2;ii<6;ii++){
                        for (jj=1;jj<7;jj++){
                        Db[ii][jj]=(-1*pivo[ii+4]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[10]=Db[3][2]/Db[2][2];
                    pivo[11]=Db[4][2]/Db[2][2];
                    pivo[12]=Db[5][2]/Db[2][2];
                    for (ii=3;ii<6;ii++){
                        for (jj=2;jj<7;jj++){
                        Dc[ii][jj]=(-1*pivo[ii+7]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[13]=Dc[4][3]/Dc[3][3];
                    pivo[14]=Dc[5][3]/Dc[3][3];
                    for (ii=4;ii<6;ii++){
                        for (jj=3;jj<7;jj++){
                        Dd[ii][jj]=(-1*pivo[ii+9]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    pivo[15]=Dd[5][4]/Dd[4][4];
                    for (ii=5;ii<6;ii++){
                        for (jj=4;jj<7;jj++){
                        De[ii][jj]=(-1*pivo[ii+10]*Dd[4][jj])+Dd[ii][jj];
                        }
                        }
                    D[5][zz]=De[5][6]/De[5][5];
                    D[4][zz]=(Dd[4][6]-D[5][zz]*Dd[4][5])/Dd[4][4];
                    D[3][zz]=(Dc[3][6]-D[5][zz]*Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][6]-D[5][zz]*Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][6]-D[5][zz]*Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][6]-D[5][zz]*C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inci=incm=incn=inco=incp=incq=0;
                    for(i=0;i<10;i++){
                    v37[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v37a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v38[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v38a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v39[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v39a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v40[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v40a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000;
                    v41[i]=E[4][0]+(mine5[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v41a[i]=E[14][14]+(mine5[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000;
                    v42[i]=E[5][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v42a[i]=E[15][15]+(liq[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v37[i];
                    E[10][10]=v37a[i];
                    incb=INCB[i];
                    E[1][0]=v38[i];
                    E[11][11]=v38a[i];
                    incc=INCC[i];
                    E[2][0]=v39[i];
                    E[12][12]=v39a[i];
                    incd=INCD[i];
                    E[3][0]=v40[i];
                    E[13][13]=v40a[i];
                    incf=INCF[i];
                    E[4][0]=v41[i];
                    E[14][14]=v41a[i];
                    incg=INCG[i];
                    E[5][0]=v42[i];
                    E[15][15]=v42a[i];
                    inci=INCI[i];
                    }
                    F6=(D[5][0]*E[0][0]+D[5][1]*E[1][0]+D[5][2]*E[2][0]+D[5][3]*E[3][0]+D[5][4]*E[4][0]+D[5][5]*E[5][0])*100;/*Fração subtraída do magma inicial*/
                    incs=sqrt(incb)*D[5][0]*E[10][10];
                    inct=sqrt(incc)*D[5][1]*E[11][11];
                    incu=sqrt(incd)*D[5][2]*E[12][12];
                    incv=sqrt(incf)*D[5][3]*E[13][13];
                    incx=sqrt(incg)*D[5][4]*E[14][14];
                    incz=sqrt(inci)*D[5][5]*E[15][15];                    
                    incw=sqrt(incs*incs+inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM FRACIONADA DE CADA MINERAL*/
                if (F6<0 & F6>-100){ /*Condição para evitar cálculos desnecessário*/
                    for(i=0;i<10;i++){
                    v43[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v47[i]=H[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v48[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v49[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v50[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v51[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v52[i]=H[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v53[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v54[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v55[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v56[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v57[i]=H[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v58[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v59[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v60[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v61[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v62[i]=H[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v63[i]=H[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v64[i]=H[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v65[i]=H[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v66[i]=H[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v67[i]=H[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    H[0][0]=v43[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v44[i];
                    H[0][2]=v45[i];
                    H[0][3]=v46[i];
                    H[0][4]=v47[i];
                    H[1][0]=v48[i];
                    H[1][1]=v49[i];
                    H[1][2]=v50[i];
                    H[1][3]=v51[i];
                    H[1][4]=v52[i];
                    H[2][0]=v53[i];
                    H[2][1]=v54[i];
                    H[2][2]=v55[i];
                    H[2][3]=v56[i];
                    H[2][4]=v57[i];
                    H[3][0]=v58[i];
                    H[3][1]=v59[i];
                    H[3][2]=v60[i];
                    H[3][3]=v61[i];
                    H[3][4]=v62[i];
                    H[4][0]=v63[i];
                    H[4][1]=v64[i];
                    H[4][2]=v65[i];
                    H[4][3]=v66[i];
                    H[4][4]=v67[i];
                    }
                for (pp=0;pp<5;pp++){/*Inversa do produto da matriz transposta pela matriz*/
                    if (pp==0){
                    H[0][5]=1;
                    H[1][5]=H[2][5]=H[3][5]=H[4][5]=0;
                    }
                    if (pp==1){
                    H[0][5]=0;
                    H[1][5]=1;
                    H[2][5]=H[3][5]=H[4][5]=0;
                    }
                    if (pp==2){
                    H[0][5]=H[1][5]=0;
                    H[2][5]=1;
                    H[3][5]=H[4][5]=0;
                    }
                    if (pp==3){
                    H[0][5]=H[1][5]=H[2][5]=0;
                    H[3][5]=1;
                    H[4][5]=0;
                    }
                    if (pp==4){
                    H[0][5]=H[1][5]=H[2][5]=H[3][5]=0;
                    H[4][5]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    pivo[4]=H[4][0]/H[0][0];
                    for (ii=1;ii<5;ii++){
                        for (jj=0;jj<6;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[5]=Ia[2][1]/Ia[1][1];
                    pivo[6]=Ia[3][1]/Ia[1][1];
                    pivo[7]=Ia[4][1]/Ia[1][1];
                    for (ii=2;ii<5;ii++){
                        for (jj=1;jj<6;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+3]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[8]=Ib[3][2]/Ib[2][2];
                    pivo[9]=Ib[4][2]/Ib[2][2];
                    for (ii=3;ii<5;ii++){
                        for (jj=2;jj<6;jj++){
                        Ic[ii][jj]=(-1*pivo[ii+5]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    pivo[10]=Ic[4][3]/Ic[3][3];
                    for (ii=4;ii<5;ii++){
                        for (jj=3;jj<6;jj++){
                        Id[ii][jj]=(-1*pivo[ii+6]*Ic[3][jj])+Ic[ii][jj];
                        }
                        }
                    I[4][pp]=Id[4][5]/Id[4][4];
                    I[3][pp]=(Ic[3][5]-I[4][pp]*Ic[3][4])/Ic[3][3];
                    I[2][pp]=(Ib[2][5]-I[4][pp]*Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][5]-I[4][pp]*Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][5]-I[4][pp]*H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];                    
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F6/100)/((-1)*F6/100); /*Cumulato*/
                    incj=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inck=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F6/100;
                    incl=sqrt(incj*incj+inck*inck);
                    INCH[i]=sqrt(incl*incl+incw*incw/10000)*cum[i]/100;
                    v68[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v68a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCM[i]=incm+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v69[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v69a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v70[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v70a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCO[i]=inco+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    v71[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v71a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCP[i]=incp+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000;
                    v72[i]=J[4][0]+(mine5[i]*INC[i]*INC[i]*cum[i]/10000);
                    v72a[i]=J[14][14]+(mine5[i]*cum[i]/10000);
                    INCQ[i]=incq+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000;
                    J[0][0]=v68[i];
                    J[10][10]=v68a[i];
                    incm=INCM[i];
                    J[1][0]=v69[i];
                    J[11][11]=v69a[i];
                    incn=INCN[i];
                    J[2][0]=v70[i];
                    J[12][12]=v70a[i];
                    inco=INCO[i];
                    J[3][0]=v71[i];
                    J[13][13]=v71a[i];
                    incp=INCP[i];
                    J[4][0]=v72[i];
                    J[14][14]=v72a[i];
                    incq=INCQ[i];
                    }
                    F7=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]+I[0][4]*J[4][0]);/*Fração cristalizada*/
                    incr=sqrt(incm)*J[10][10];
                    incs=sqrt(incn)*J[11][11];
                    inct=sqrt(inco)*J[12][12];
                    incu=sqrt(incp)*J[13][13];
                    incv=sqrt(incq)*J[14][14];
                    incx=sqrt(incr*incr+incs*incs+inct*inct+incu*incu+incv*incv);
                    F8=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]+I[1][4]*J[4][0]);
                    F9=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]+I[2][4]*J[4][0]);
                    F10=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]+I[3][4]*J[4][0]);
                    F11=(I[4][0]*J[0][0]+I[4][1]*J[1][0]+I[4][2]*J[2][0]+I[4][3]*J[3][0]+I[4][4]*J[4][0]);
                    ML=(1-F7-F8-F9-F10-F11)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]); /*Multiplicador de Lagrange*/
                    incz=sqrt(incx*incx*5)*ML;
                    F12=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4])+F7)*100; /*Fração Mineral 1*/
                    incy=sqrt(incx*incx+incz*incz)*F12; /*incerteza do mineral 1*/
                    F13=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4])+F8)*100; /*Fração Mineral 2*/
                    incaa=sqrt(incx*incx+incz*incz)*F13; /*incerteza do mineral 2*/
                    F14=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4])+F9)*100; /*Fração Mineral 3*/
                    incbb=sqrt(incx*incx+incz*incz)*F14; /*incerteza do mineral 3*/
                    F15=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4])+F10)*100; /*Fração Mineral 4*/
                    inccc=sqrt(incx*incx+incz*incz)*F15; /*incerteza do mineral 4*/
                    F16=(ML*(I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4])+F11)*100; /*Fração Mineral 5*/
                    incdd=sqrt(incx*incx+incz*incz)*F16; /*incerteza do mineral 5*/
                    }
                if (F6<0 & F6>-100 & F12>0 & F13>0 & F14>0 & F15>0 & F16>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos elementos maiores e menores*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][l]*F12*F6)/10000+(B[i][l+m]*F13*F6)/10000+(B[i][l+m+q]*F14*F6)/10000+(B[i][l+m+q+v]*F15*F6)/10000+(B[i][l+m+q+v+vv]*F16*F6)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F6);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                      
                if (Errorel>=t & Errorel<=u){
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ /*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){ /*COEFICIENTE DE PARTIÇÃO BÁSICO E INTERMEDIÁRIO*/
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==14 & l+m+q+v+vv==15) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][1]+F16*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==14 & l+m+q+v+vv==16) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][1]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==15 & l+m+q+v+vv==16) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==17 & l+m+q+v+vv==18) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][1]+F16*BAS[ii][2])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==17 & l+m+q+v+vv==19) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][1]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==18 & l+m+q+v+vv==19) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][5]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==14 & l+m+q+v==15 & l+m+q+v+vv==16) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==17 & l+m+q+v==18 & l+m+q+v+vv==19) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][0]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100; 
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==15 & l+m+q+v+vv==16) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][5]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==18 & l+m+q+v+vv==19) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][5]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==21 & l+m+q+v+vv==22) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][5]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==24 & l+m+q+v+vv==25) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][5]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==27 & l+m+q+v+vv==28) 
                      Dg=(F12*BAS[ii][4]+F13*BAS[ii][5]+F14*BAS[ii][1]+F15*BAS[ii][2]+F16*BAS[ii][3])/100;   
                   }
                  if (G[1][j+1]>=63){  /*COEFICIENTE DE PARTIÇÃO ÁCIDO*/
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==14 & l+m+q+v==15 & l+m+q+v+vv==16) 
                      Dg=(F12*AC[ii][3]+F13*AC[ii][4]+F14*AC[ii][0]+F15*AC[ii][1]+F16*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==17 & l+m+q+v==18 & l+m+q+v+vv==19) 
                      Dg=(F12*AC[ii][3]+F13*AC[ii][4]+F14*AC[ii][0]+F15*AC[ii][1]+F16*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==20 & l+m+q+v==21 & l+m+q+v+vv==22) 
                      Dg=(F12*AC[ii][3]+F13*AC[ii][4]+F14*AC[ii][0]+F15*AC[ii][1]+F16*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==23 & l+m+q+v==24 & l+m+q+v+vv==25) 
                      Dg=(F12*AC[ii][3]+F13*AC[ii][4]+F14*AC[ii][0]+F15*AC[ii][1]+F16*AC[ii][2])/100;
                   if (l>=0 & l<=2 & l+m==13 & l+m+q==26 & l+m+q+v==27 & l+m+q+v+vv==28) 
                      Dg=(F12*AC[ii][3]+F13*AC[ii][4]+F14*AC[ii][0]+F15*AC[ii][1]+F16*AC[ii][2])/100;
                      }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F6/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+1+m;
                   ww=l+1+m+q;
                   www=l+1+m+q+v;
                   wwww=l+1+m+q+v+vv;
                   /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                   if (Errorel>=t & Errorel<=u & ((G[1][j+1]<52 & G[6][j+1]>G1 & l==0 &
                       (m==3 & (q==10&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==11&(v==1&vv==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas , Grupo 1 e Apatita*/
                        m==4 &(q==9&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==10&(v==1&vv==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 &(q==8&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==9&(v==1&vv==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 &(q==7&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==8&(v==1&vv==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==7 &(q==6&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==7&(v==1&vv==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 &(q==5&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==6&(v==1&vv==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 &(q==4&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==5&(v==1&vv==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 &(q==3&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==4&(v==1&vv==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 &(q==2&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==3&(v==1&vv==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 &(q==1&(v==1&(vv==1||vv==2)||v==2&vv==1)||q==2&(v==1&vv==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[1][j+1]<52 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==0 & (m==3 &(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&(v==1&vv==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita básica com olivinas, Grupo 2 e Apatita*/
                        m==4 &(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&(v==1&vv==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==5 &(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&(v==1&vv==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==6 &(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&(v==1&vv==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==7 &(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&(v==1&vv==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==8 &(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&(v==1&vv==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==9 &(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&(v==1&vv==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==10 &(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&(v==1&vv==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==11 &(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&(v==1&vv==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==12 &(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&(v==1&vv==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[6][j+1]>G1 & G[1][j+1]<52 & l==0 & (m==13&q==1&v==1&vv==1)) || /*Magnetita Básica com grupo 1 e apatita*/ 
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]<52 & l==0 & (m==13&q==4&v==1&vv==1)) || /*Magnetita Básica com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]<52 & l==0 & (m==13&q==7&v==1&vv==1)) || /*Magnetita Básica com grupo 3 e apatita*/ 
                   (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]<52 & l==0 & (m==13&q==10&v==1&vv==1)) || /*Magnetita Básica com grupo 4 e apatita*/   
                   (G[6][j+1]>G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&q==1&v==1&vv==1)) || /*Magnetita Intermediária com grupo 1 e apatita*/     
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&q==4&v==1&vv==1)) || /*Magnetita Intermediária com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&q==7&v==1&&vv==1)) || /*Magnetita Intermediária com grupo 3 e apatita*/ 
                   (G[6][j+1]>G4 & G[6][j+1]<=G3 & G[1][j+1]>=52 & G[1][j+1]<63 & l==1 & (m==12&q==10&v==1&vv==1)) ||/*Magnetita Intermediária com grupo 4 e apatita*/ 
                   (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]>G1 & l==1 & (m==2 &(q==10&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==11&(v==1&vv==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita intermediária com olivinas e Grupo 1*/
                        m==3 &(q==9&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==10&(v==1&vv==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 &(q==8&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==9&(v==1&vv==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 &(q==7&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==8&(v==1&vv==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 & (q==6&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==7&(v==1&vv==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 &(q==5&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==6&(v==1&vv==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 &(q==4&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==5&(v==1&vv==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 &(q==3&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==4&(v==1&vv==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 &(q==2&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==3&(v==1&vv==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 &(q==1&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==2&(v==1&vv==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) ||
                   (G[1][j+1]>=52 & G[1][j+1]<63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==1 & (m==2 &(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&v==1&vv==1) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita intermediária com olivinas e Grupo 2*/
                        m==3 &(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&v==1&vv==1) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==4 &(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&v==1&vv==1) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==5 &(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&v==1&vv==1) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==6 &(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&v==1&vv==1) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==7 &(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&v==1&vv==1) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==8 &(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&v==1&vv==1) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==9 &(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&v==1&vv==1) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==10 &(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&v==1&vv==1) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==11 &(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&v==1&vv==1) & oliv[j+1]>69 & oliv[j+1]<=72.5)) || 
                   (G[6][j+1]>G1 & G[1][j+1]>63 & l==2 & (m==11&q==1&v==1&&vv==1)) || /*Magnetita ácida com grupo 1 e apatita*/ 
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & G[1][j+1]>63 & l==2  & (m==11&q==4&v==1&vv==1)) || /*Magnetita ácida com grupo 2 e apatita*/ 
                   (G[6][j+1]>G3 & G[6][j+1]<=G2 & G[1][j+1]>63 & l==2 & (m==11&q==7&v==1&vv==1)) || /*Magnetita ácida com grupo 3 e apatita*/ 
                   (G[6][j+1]<G4 & G[1][j+1]>63 & l==2 & (m==11&(q==13&(v==1&vv==1)))) || /*Magnetita ácida com grupo 5 e apatita*/ 
                   (G[1][j+1]>63 & G[6][j+1]>G1 & l==2 & (m==1 &(q==10&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==11&(v==1&vv==1)) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas e Grupo 1*/
                        m==2 &(q==9&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==10&(v==1&vv==1)) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 &(q==8&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==9&(v==1&vv==1)) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 &(q==7&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==8&(v==1&vv==1)) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 &(q==6&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==7&(v==1&vv==1)) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 &(q==5&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==6&(v==1&vv==1)) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 &(q==4&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==5&(v==1&vv==1)) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 &(q==3&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==4&(v==1&vv==1)) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 &(q==2&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==3&(v==1&vv==1)) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 &(q==1&(v==1&(vv==1||vv==2)||v==2||vv==1)||q==2&(v==1&vv==1)) & oliv[j+1]>69 & oliv[j+1]<=72.5)) ||
                   (G[1][j+1]>63 & G[6][j+1]<=G1 & G[6][j+1]>G2 & l==2 & (m==1 &(q==10&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==14&v==1&vv==1) & oliv[j+1]>84.5 & oliv[j+1]<86 || /*Magnetita ácida com olivinas e Grupo 2*/
                        m==2 &(q==9&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==13&v==1&vv==1) & oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        m==3 &(q==8&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==12&v==1&vv==1) & oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        m==4 &(q==7&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==11&v==1&vv==1) & oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        m==5 &(q==6&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==10&v==1&vv==1) & oliv[j+1]>79 & oliv[j+1]<=81 ||
                        m==6 &(q==5&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==9&v==1&vv==1) & oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        m==7 &(q==4&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==8&v==1&vv==1) & oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        m==8 &(q==3&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==7&v==1&vv==1) & oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        m==9 &(q==2&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==6&v==1&vv==1) & oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        m==10 &(q==1&(v==4&(vv==1||vv==2)||v==5&vv==1)||q==5&v==1&vv==1) & oliv[j+1]>69 & oliv[j+1]<=72.5)) ||
                   (G[6][j+1]>G1 & (l==3&m==10&q==1&v==1&vv==1&oliv[j+1]>84.5 & oliv[j+1]<86 ||  /*Olivinas com grupo 1 e apatita*/          
                        l==4&m==9&q==1&v==1&vv==1&oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        l==5&m==8&q==1&v==1&vv==1&oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        l==6&m==7&q==1&v==1&vv==1&oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        l==7&m==6&q==1&v==1&vv==1&oliv[j+1]>79 & oliv[j+1]<=81 ||
                        l==8&m==5&q==1&v==1&vv==1&oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        l==9&m==4&q==1&v==1&vv==1&oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        l==10&(m==3&(q==1&(v==1||v==2)||q==2&(v==1))||m==4&(q==1&(v==1)))&oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        l==11&m==2&q==1&v==1&vv==1&oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        l==12&m==1&q==1&v==1&vv==1&oliv[j+1]>69 & oliv[j+1]<=72.5)) ||
                   (G[6][j+1]>G2 & G[6][j+1]<=G1 & (l==3&m==10&q==4&v==1&vv==1&oliv[j+1]>84.5 & oliv[j+1]<86 ||  /*Olivinas com grupo 2 e apatita*/          
                        l==4&m==9&q==4&v==1&vv==1&oliv[j+1]>83.5 & oliv[j+1]<=84.5 ||
                        l==5&m==8&q==4&v==1&vv==1&oliv[j+1]>82.5 & oliv[j+1]<=83.5 ||
                        l==6&m==7&q==4&v==1&vv==1&oliv[j+1]>81 & oliv[j+1]<=82.5 ||
                        l==7&m==6&q==4&v==1&vv==1&oliv[j+1]>79 & oliv[j+1]<=81 ||
                        l==8&m==5&q==4&v==1&vv==1&oliv[j+1]>77.5 & oliv[j+1]<=79 ||
                        l==9&m==4&q==4&v==1&vv==1&oliv[j+1]>76.5 & oliv[j+1]<=77.5 ||
                        l==10&m==3&q==4&v==1&vv==1&oliv[j+1]>75.5 & oliv[j+1]<=76.5 ||
                        l==11&m==2&q==4&v==1&vv==1&oliv[j+1]>72.5 & oliv[j+1]<=75.5 ||
                        l==12&m==1&q==4&v==1&vv==1&oliv[j+1]>69 & oliv[j+1]<=72.5)))){
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+1]);
                        fprintf(arq_saida, " (%.2f", F12);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incy);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F13);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incaa);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F14);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incbb);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F15);
                        fprintf(arq_saida, " +/- %.2f)%% e ", inccc);
                        fprintf(arq_saida, str_mine[wwww]);
                        fprintf(arq_saida, " (%.2f", F16);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incdd);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F6);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){        /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        } 
                }
                }
                }
                }
                }
                }
                }
                }
                }
    /*CÁLCULOS PARA FRACIONAMENTO DE SEIS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE SEIS MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<5;l++){
        p++;
        r=-1;
        for(m=1;m<(20-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(18-r);q++){
            rr++;
            rrr=-1;
            for(v=1;v<(7-rr);v++){
              rrr++;
              rrrr=-1;
              for(vv=1;vv<(3-rrr);vv++){
                rrrr++;
                for(vvv=1;vvv<(3-rrrr);vvv++){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[0][5]=C[0][6]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[1][5]=C[1][6]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[2][5]=C[2][6]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[3][5]=C[3][6]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=C[4][5]=C[4][6]=C[5][0]=C[5][1]=C[5][2]=C[5][3]=C[5][4]=C[5][5]=C[5][6]=C[6][0]=C[6][1]=C[6][2]=C[6][3]=C[6][4]=C[6][5]=C[6][6]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=E[5][0]=E[6][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=E[15][15]=E[16][16]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[0][4]=H[0][5]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[1][4]=H[1][5]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[2][4]=H[2][5]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=H[3][4]=H[3][5]=H[4][0]=H[4][1]=H[4][2]=H[4][3]=H[4][4]=H[4][5]=H[5][0]=H[5][1]=H[5][2]=H[5][3]=H[5][4]=H[5][5]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=J[4][0]=J[5][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=J[14][14]=J[15][15]=0;
                    /*Seleção Para Diminuir o Tempo de Cálculo*/
                    if (l==0 & ((m==3&q==10&v==1&vv==1&vvv==1)||(m==4&q==9&v==1&vv==1&vvv==1)||(m==5&q==8&v==1&vv==1&vvv==1)||(m==6&q==7&v==1&vv==1&vvv==1)||(m==7&q==6&v==1&vv==1&vvv==1)||(m==8&q==5&v==1&vv==1&vvv==1)||(m==9&q==4&v==1&vv==1&vvv==1)||(m==10&q==3&v==1&vv==1&vvv==1)||(m==11&q==2&v==1&vv==1&vvv==1)||(m==12&q==1&v==1&vv==1&vvv==1))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==0 & ((m==3&q==10&v==4&vv==1&vvv==1)||(m==4&q==9&v==4&vv==1&vvv==1)||(m==5&q==8&v==4&vv==1&vvv==1)||(m==6&q==7&v==4&vv==1&vvv==1)||(m==7&q==6&v==4&vv==1&vvv==1)||(m==8&q==5&v==4&vv==1&vvv==1)||(m==9&q==4&v==4&vv==1&vvv==1)||(m==10&q==3&v==4&vv==1&vvv==1)||(m==11&q==2&v==4&vv==1&vvv==1)||(m==12&q==1&v==4&vv==1&vvv==1))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==1 & ((m==2&q==10&v==1&vv==1&vvv==1)||(m==3&q==9&v==1&vv==1&vvv==1)||(m==4&q==8&v==1&vv==1&vvv==1)||(m==5&q==7&v==1&vv==1&vvv==1)||(m==6&q==6&v==1&vv==1&vvv==1)||(m==7&q==5&v==1&vv==1&vvv==1)||(m==8&q==4&v==1&vv==1&vvv==1)||(m==9&q==3&v==1&vv==1&vvv==1)||(m==10&q==2&v==1&vv==1&vvv==1)||(m==11&q==1&v==1&vv==1&vvv==1))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==1 & ((m==2&q==10&v==4&vv==1&vvv==1)||(m==3&q==9&v==4&vv==1&vvv==1)||(m==4&q==8&v==4&vv==1&vvv==1)||(m==5&q==7&v==4&vv==1&vvv==1)||(m==6&q==6&v==4&vv==1&vvv==1)||(m==7&q==5&v==4&vv==1&vvv==1)||(m==8&q==4&v==4&vv==1&vvv==1)||(m==9&q==3&v==4&vv==1&vvv==1)||(m==10&q==2&v==4&vv==1&vvv==1)||(m==11&q==1&v==4&vv==1&vvv==1))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==2 & ((m==1&q==10&v==1&vv==1&vvv==1)||(m==2&q==9&v==1&vv==1&vvv==1)||(m==3&q==8&v==1&vv==1&vvv==1)||(m==4&q==7&v==1&vv==1&vvv==1)||(m==5&q==6&v==1&vv==1&vvv==1)||(m==6&q==5&v==1&vv==1&vvv==1)||(m==7&q==4&v==1&vv==1&vvv==1)||(m==8&q==3&v==1&vv==1&vvv==1)||(m==9&q==2&v==1&vv==1&vvv==1)||(m==10&q==1&v==1&vv==1&vvv==1))||                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                        l==2 & ((m==1&q==10&v==4&vv==1&vvv==1)||(m==2&q==9&v==4&vv==1&vvv==1)||(m==3&q==8&v==4&vv==1&vvv==1)||(m==4&q==7&v==4&vv==1&vvv==1)||(m==5&q==6&v==4&vv==1&vvv==1)||(m==6&q==5&v==4&vv==1&vvv==1)||(m==7&q==4&v==4&vv==1&vvv==1)||(m==8&q==3&v==4&vv==1&vvv==1)||(m==9&q==2&v==4&vv==1&vvv==1)||(m==10&q==1&v==4&vv==1&vvv==1)))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
                        {
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                  
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][l];/*Vetor fase mineral*/
                    mine2[i]=B[i][l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][l+m+q+v];/*Vetor fase mineral*/
                    mine5[i]=B[i][l+m+q+v+vv];/*Vetor fase mineral*/
                    mine6[i]=B[i][l+m+q+v+vv+vvv];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v6[i]=C[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v7[i]=C[0][6]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v8[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v9[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v10[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v11[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v12[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v13[i]=C[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v14[i]=C[1][6]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v15[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v16[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v17[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v18[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v19[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v20[i]=C[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v21[i]=C[2][6]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v22[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v23[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v24[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v25[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v26[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v27[i]=C[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v28[i]=C[3][6]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v29[i]=C[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v30[i]=C[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v31[i]=C[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v32[i]=C[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v33[i]=C[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v34[i]=C[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v35[i]=C[4][6]+(mine5[i]*INC[i]*INC[i]*liq[i]/10000);
                    v36[i]=C[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v37[i]=C[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v38[i]=C[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v39[i]=C[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v40[i]=C[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v41[i]=C[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v42[i]=C[5][6]+(mine6[i]*INC[i]*INC[i]*liq[i]/10000);
                    v43[i]=C[6][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=C[6][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=C[6][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=C[6][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v47[i]=C[6][4]+(liq[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v48[i]=C[6][5]+(liq[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v49[i]=C[6][6]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[0][5]=v6[i];
                    C[0][6]=v7[i];
                    C[1][0]=v8[i];
                    C[1][1]=v9[i];
                    C[1][2]=v10[i];
                    C[1][3]=v11[i];
                    C[1][4]=v12[i];
                    C[1][5]=v13[i];
                    C[1][6]=v14[i];
                    C[2][0]=v15[i];
                    C[2][1]=v16[i];
                    C[2][2]=v17[i];
                    C[2][3]=v18[i];
                    C[2][4]=v19[i];
                    C[2][5]=v20[i];
                    C[2][6]=v21[i];
                    C[3][0]=v22[i];
                    C[3][1]=v23[i];
                    C[3][2]=v24[i];
                    C[3][3]=v25[i];
                    C[3][4]=v26[i];
                    C[3][5]=v27[i];
                    C[3][6]=v28[i];
                    C[4][0]=v29[i];
                    C[4][1]=v30[i];
                    C[4][2]=v31[i];
                    C[4][3]=v32[i];
                    C[4][4]=v33[i];
                    C[4][5]=v34[i];
                    C[4][6]=v35[i];
                    C[5][0]=v36[i];
                    C[5][1]=v37[i];
                    C[5][2]=v38[i];
                    C[5][3]=v39[i];
                    C[5][4]=v40[i];
                    C[5][5]=v41[i];
                    C[5][6]=v42[i];
                    C[6][0]=v43[i];
                    C[6][1]=v44[i];
                    C[6][2]=v45[i];
                    C[6][3]=v46[i];
                    C[6][4]=v47[i];
                    C[6][5]=v48[i];
                    C[6][6]=v49[i];
                    }
                for (zz=0;zz<7;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][7]=1;
                    C[1][7]=C[2][7]=C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==1){
                    C[0][7]=0;
                    C[1][7]=1;
                    C[2][7]=C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==2){
                    C[0][7]=C[1][7]=0;
                    C[2][7]=1;
                    C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==3){
                    C[0][7]=C[1][7]=C[2][7]=0;
                    C[3][7]=1;
                    C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==4){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=0;
                    C[4][7]=1;
                    C[5][7]=C[6][7]=0;
                    }
                    if (zz==5){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=C[4][7]=0;
                    C[5][7]=1;
                    C[6][7]=0;
                    }
                    if (zz==6){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=C[4][7]=C[5][7]=0;
                    C[6][7]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    pivo[5]=C[5][0]/C[0][0];
                    pivo[6]=C[6][0]/C[0][0];
                    for (ii=1;ii<7;ii++){
                        for (jj=0;jj<8;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[7]=Da[2][1]/Da[1][1];
                    pivo[8]=Da[3][1]/Da[1][1];
                    pivo[9]=Da[4][1]/Da[1][1];
                    pivo[10]=Da[5][1]/Da[1][1];
                    pivo[11]=Da[6][1]/Da[1][1];
                    for (ii=2;ii<7;ii++){
                        for (jj=1;jj<8;jj++){
                        Db[ii][jj]=(-1*pivo[ii+5]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[12]=Db[3][2]/Db[2][2];
                    pivo[13]=Db[4][2]/Db[2][2];
                    pivo[14]=Db[5][2]/Db[2][2];
                    pivo[15]=Db[6][2]/Db[2][2];
                    for (ii=3;ii<7;ii++){
                        for (jj=2;jj<8;jj++){
                        Dc[ii][jj]=(-1*pivo[ii+9]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[16]=Dc[4][3]/Dc[3][3];
                    pivo[17]=Dc[5][3]/Dc[3][3];
                    pivo[18]=Dc[6][3]/Dc[3][3];
                    for (ii=4;ii<7;ii++){
                        for (jj=3;jj<8;jj++){
                        Dd[ii][jj]=(-1*pivo[ii+12]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    pivo[19]=Dd[5][4]/Dd[4][4];
                    pivo[20]=Dd[6][4]/Dd[4][4];
                    for (ii=5;ii<7;ii++){
                        for (jj=4;jj<8;jj++){
                        De[ii][jj]=(-1*pivo[ii+14]*Dd[4][jj])+Dd[ii][jj];
                        }
                        }
                    pivo[21]=De[6][5]/De[5][5];
                    for (ii=6;ii<7;ii++){
                        for (jj=5;jj<8;jj++){
                        Df[ii][jj]=(-1*pivo[ii+15]*De[5][jj])+De[ii][jj];
                        }
                        }
                    D[6][zz]=Df[6][7]/Df[6][6];    
                    D[5][zz]=(De[5][7]-D[6][zz]*De[5][6])/De[5][5];
                    D[4][zz]=(Dd[4][7]-D[6][zz]*Dd[4][6]-D[5][zz]*Dd[4][5])/Dd[4][4];
                    D[3][zz]=(Dc[3][7]-D[6][zz]*Dc[3][6]-D[5][zz]*Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][7]-D[6][zz]*Db[2][6]-D[5][zz]*Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][7]-D[6][zz]*Da[1][6]-D[5][zz]*Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][7]-D[6][zz]*C[0][6]-D[5][zz]*C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inci=incj=incn=inco=incp=incq=incaa=incbb=0;
                    for(i=0;i<10;i++){
                    v50[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v50a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v51[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v51a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v52[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v52a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v53[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v53a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000;
                    v54[i]=E[4][0]+(mine5[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v54a[i]=E[14][14]+(mine5[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000;
                    v55[i]=E[5][0]+(mine6[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v55a[i]=E[15][15]+(mine6[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000;
                    v56[i]=E[6][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v56a[i]=E[16][16]+(liq[i]*solliq[i]/10000);
                    INCJ[i]=incj+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v50[i];
                    E[10][10]=v50a[i];
                    incb=INCB[i];
                    E[1][0]=v51[i];
                    E[11][11]=v51a[i];
                    incc=INCC[i];
                    E[2][0]=v52[i];
                    E[12][12]=v52a[i];
                    incd=INCD[i];
                    E[3][0]=v53[i];
                    E[13][13]=v53a[i];
                    incf=INCF[i];
                    E[4][0]=v54[i];
                    E[14][14]=v54a[i];
                    incg=INCG[i];
                    E[5][0]=v55[i];
                    E[15][15]=v55a[i];
                    inci=INCI[i];
                    E[6][0]=v56[i];
                    E[16][16]=v56a[i];
                    incj=INCJ[i];
                    }
                    F7=(D[6][0]*E[0][0]+D[6][1]*E[1][0]+D[6][2]*E[2][0]+D[6][3]*E[3][0]+D[6][4]*E[4][0]+D[6][5]*E[5][0]+D[6][6]*E[6][0])*100;/*Fração subtraída do magma inicial*/                
                    incr=sqrt(incb)*D[6][0]*E[10][10];
                    incs=sqrt(incc)*D[6][1]*E[11][11];
                    inct=sqrt(incd)*D[6][2]*E[12][12];
                    incu=sqrt(incf)*D[6][3]*E[13][13];
                    incv=sqrt(incg)*D[6][4]*E[14][14];
                    incx=sqrt(inci)*D[6][5]*E[15][15];
                    incz=sqrt(incj)*D[6][6]*E[16][16];
                    incw=sqrt(incr*incr+incs*incs+inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM FRACIONADA DE CADA MINERAL*/
                if (F7<0 & F7>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v57[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v58[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v59[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v60[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v61[i]=H[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v62[i]=H[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v63[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v64[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v65[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v66[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v67[i]=H[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v68[i]=H[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v69[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v70[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v71[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v72[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v73[i]=H[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v74[i]=H[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v75[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v76[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v77[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v78[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v79[i]=H[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v80[i]=H[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v81[i]=H[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v82[i]=H[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v83[i]=H[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v84[i]=H[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v85[i]=H[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v86[i]=H[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v87[i]=H[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v88[i]=H[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v89[i]=H[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v90[i]=H[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v91[i]=H[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v92[i]=H[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    H[0][0]=v57[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v58[i];
                    H[0][2]=v59[i];
                    H[0][3]=v60[i];
                    H[0][4]=v61[i];
                    H[0][5]=v62[i];
                    H[1][0]=v63[i];
                    H[1][1]=v64[i];
                    H[1][2]=v65[i];
                    H[1][3]=v66[i];
                    H[1][4]=v67[i];
                    H[1][5]=v68[i];
                    H[2][0]=v69[i];
                    H[2][1]=v70[i];
                    H[2][2]=v71[i];
                    H[2][3]=v72[i];
                    H[2][4]=v73[i];
                    H[2][5]=v74[i];
                    H[3][0]=v75[i];
                    H[3][1]=v76[i];
                    H[3][2]=v77[i];
                    H[3][3]=v78[i];
                    H[3][4]=v79[i];
                    H[3][5]=v80[i];
                    H[4][0]=v81[i];
                    H[4][1]=v82[i];
                    H[4][2]=v83[i];
                    H[4][3]=v84[i];
                    H[4][4]=v85[i];
                    H[4][5]=v86[i];
                    H[5][0]=v87[i];
                    H[5][1]=v88[i];
                    H[5][2]=v89[i];
                    H[5][3]=v90[i];
                    H[5][4]=v91[i];
                    H[5][5]=v92[i];
                    }
                for (pp=0;pp<6;pp++){
                    if (pp==0){/*Inversa do produto da matriz transposta pela matriz*/
                    H[0][6]=1;
                    H[1][6]=H[2][6]=H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==1){
                    H[0][6]=0;
                    H[1][6]=1;
                    H[2][6]=H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==2){
                    H[0][6]=H[1][6]=0;
                    H[2][6]=1;
                    H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==3){
                    H[0][6]=H[1][6]=H[2][6]=0;
                    H[3][6]=1;
                    H[4][6]=H[5][6]=0;
                    }
                    if (pp==4){
                    H[0][6]=H[1][6]=H[2][6]=H[3][6]=0;
                    H[4][6]=1;
                    H[5][6]=0;
                    }
                    if (pp==5){
                    H[0][6]=H[1][6]=H[2][6]=H[3][6]=H[4][6]=0;
                    H[5][6]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    pivo[4]=H[4][0]/H[0][0];
                    pivo[5]=H[5][0]/H[0][0];
                    for (ii=1;ii<6;ii++){
                        for (jj=0;jj<7;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[6]=Ia[2][1]/Ia[1][1];
                    pivo[7]=Ia[3][1]/Ia[1][1];
                    pivo[8]=Ia[4][1]/Ia[1][1];
                    pivo[9]=Ia[5][1]/Ia[1][1];
                    for (ii=2;ii<6;ii++){
                        for (jj=1;jj<7;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+4]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[10]=Ib[3][2]/Ib[2][2];
                    pivo[11]=Ib[4][2]/Ib[2][2];
                    pivo[12]=Ib[5][2]/Ib[2][2];
                    for (ii=3;ii<6;ii++){
                        for (jj=2;jj<7;jj++){
                        Ic[ii][jj]=(-1*pivo[ii+7]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    pivo[13]=Ic[4][3]/Ic[3][3];
                    pivo[14]=Ic[5][3]/Ic[3][3];
                    for (ii=4;ii<6;ii++){
                        for (jj=3;jj<7;jj++){
                        Id[ii][jj]=(-1*pivo[ii+9]*Ic[3][jj])+Ic[ii][jj];
                        }
                        }
                    pivo[15]=Id[5][4]/Id[4][4];
                    for (ii=5;ii<6;ii++){
                        for (jj=4;jj<7;jj++){
                        Ie[ii][jj]=(-1*pivo[ii+10]*Id[4][jj])+Id[ii][jj];
                        }
                        }
                    I[5][pp]=Ie[5][6]/Ie[5][5];
                    I[4][pp]=(Id[4][6]-I[5][pp]*Id[4][5])/Id[4][4];
                    I[3][pp]=(Ic[3][6]-I[5][pp]*Ic[3][5]-I[4][pp]*Ic[3][4])/Ic[3][3];
                    I[2][pp]=(Ib[2][6]-I[5][pp]*Ib[2][5]-I[4][pp]*Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][6]-I[5][pp]*Ia[1][5]-I[4][pp]*Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][6]-I[5][pp]*H[0][5]-I[4][pp]*H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];                    
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F7/100)/((-1)*F7/100); 
                    inck=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    incl=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F7/100;
                    incm=sqrt(inck*inck+incl*incl);
                    INCH[i]=sqrt(incm*incm+incw*incw/10000)*cum[i]/100;
                    v93[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v93a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v94[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v94a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCO[i]=inco+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v95[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v95a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCP[i]=incp+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    v96[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v96a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCQ[i]=incq+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000;
                    v97[i]=J[4][0]+(mine5[i]*INC[i]*INC[i]*cum[i]/10000);
                    v97a[i]=J[14][14]+(mine5[i]*cum[i]/10000);
                    INCAA[i]=incaa+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000;
                    v98[i]=J[5][0]+(mine6[i]*INC[i]*INC[i]*cum[i]/10000);
                    v98a[i]=J[15][15]+(mine6[i]*cum[i]/10000);
                    INCBB[i]=incbb+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000;
                    J[0][0]=v93[i];
                    J[10][10]=v93a[i];
                    incn=INCN[i];
                    J[1][0]=v94[i];
                    J[11][11]=v94a[i];
                    inco=INCO[i];
                    J[2][0]=v95[i];
                    J[12][12]=v95a[i];
                    incp=INCP[i];
                    J[3][0]=v96[i];
                    J[13][13]=v96a[i];
                    incq=INCQ[i];
                    J[4][0]=v97[i];
                    J[14][14]=v97a[i];
                    incaa=INCAA[i];
                    J[5][0]=v98[i];
                    J[15][15]=v98a[i];
                    incbb=INCBB[i];
                    }
                    F8=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]+I[0][4]*J[4][0]+I[0][5]*J[5][0]);/*Fração cristalizada*/
                    inccc=sqrt(incn)*J[10][10];
                    incdd=sqrt(inco)*J[11][11];
                    incee=sqrt(incp)*J[12][12];
                    incff=sqrt(incq)*J[13][13];
                    incgg=sqrt(incaa)*J[14][14];
                    inchh=sqrt(incbb)*J[15][15];
                    incii=sqrt(inccc*inccc+incdd*incdd+incee*incee+incff*incff+incgg*incgg+inchh*inchh);
                    F9=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]+I[1][4]*J[4][0]+I[1][5]*J[5][0]);
                    F10=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]+I[2][4]*J[4][0]+I[2][5]*J[5][0]);
                    F11=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]+I[3][4]*J[4][0]+I[3][5]*J[5][0]);
                    F12=(I[4][0]*J[0][0]+I[4][1]*J[1][0]+I[4][2]*J[2][0]+I[4][3]*J[3][0]+I[4][4]*J[4][0]+I[4][5]*J[5][0]);
                    F13=(I[5][0]*J[0][0]+I[5][1]*J[1][0]+I[5][2]*J[2][0]+I[5][3]*J[3][0]+I[5][4]*J[4][0]+I[5][5]*J[5][0]);
                    ML=(1-F8-F9-F10-F11-F12-F13)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5]+I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5]+I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5]+I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5]); /*Multiplicador de Lagrange*/
                    incjj=sqrt(incii*incii*6)*ML;
                    F14=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5])+F8)*100; /*Fração Mineral 1*/
                    inckk=sqrt(incii*incii+incjj*incjj)*F14; /*incerteza do mineral 1*/
                    F15=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5])+F9)*100; /*Fração Mineral 2*/
                    incll=sqrt(incii*incii+incjj*incjj)*F15; /*incerteza do mineral 2*/
                    F16=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5])+F10)*100; /*Fração Mineral 3*/
                    incmm=sqrt(incii*incii+incjj*incjj)*F16; /*incerteza do mineral 3*/
                    F17=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5])+F11)*100; /*Fração Mineral 4*/
                    incnn=sqrt(incii*incii+incjj*incjj)*F17; /*incerteza do mineral 4*/
                    F18=(ML*(I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5])+F12)*100; /*Fração Mineral 5*/
                    incoo=sqrt(incii*incii+incjj*incjj)*F18; /*incerteza do mineral 5*/
                    F19=(ML*(I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5])+F13)*100; /*Fração Mineral 6*/
                    incpp=sqrt(incii*incii+incjj*incjj)*F19; /*incerteza do mineral 6*/
                    }
                if (F7<0 & F7>-90 & F14>0 & F15>0 & F16>0 & F17>0 & F18>0 & F19>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos elementos maiores e menores*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][l]*F14*F7)/10000+(B[i][l+m]*F15*F7)/10000+(B[i][l+m+q]*F16*F7)/10000+(B[i][l+m+q+v]*F17*F7)/10000+(B[i][l+m+q+v+vv]*F18*F7)/10000+(B[i][l+m+q+v+vv+vvv]*F19*F7)/10000+G[i+1][j+1];
                        if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F7);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                        
                if (Errorel>=t & Errorel<=u){
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ /*Erro Relativo utilizando Traços*/
                 if (G[1][j+1]<63){ /*COEFICIENTE DE PARTIÇÃO BÁSICO E INTERMEDIÁRIO*/
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==14 & l+m+q+v+vv==15 & l+m+q+v+vv+vvv==16) 
                      Dg=(F14*BAS[ii][4]+F15*BAS[ii][0]+F16*BAS[ii][5]+F17*BAS[ii][1]+F18*BAS[ii][2]+F19*BAS[ii][3])/100;
                   if (l>=0 & l<=2 & l+m>=3 & l+m<=12 & l+m+q==13 & l+m+q+v==17 & l+m+q+v+vv==18 & l+m+q+v+vv+vvv==19) 
                      Dg=(F14*BAS[ii][4]+F15*BAS[ii][0]+F16*BAS[ii][5]+F17*BAS[ii][1]+F18*BAS[ii][2]+F19*BAS[ii][3])/100;   
                   }
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F7/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+1+m;
                   ww=l+1+m+q;
                   www=l+1+m+q+v;
                   wwww=l+1+m+q+v+vv;
                   wwwww=l+1+m+q+v+vv+vvv;
                   /*SELEÇÃO PARA IMPRESSÃO DOS RESULTADOS*/
                   if (Errorel>=t & Errorel<=u & G[6][j+1]>G2 & ((m==3&q==10&oliv[j+1]>84.5 & oliv[j+1]<86) || /*Magnetita básica com olivinas , Grupo 1 e Apatita*/
                           (m==4&q==9&oliv[j+1]>83.5 & oliv[j+1]<=84.5) ||
                           (m==5&q==8&oliv[j+1]>82.5 & oliv[j+1]<=83.5) ||
                           (m==6&q==7&oliv[j+1]>81 & oliv[j+1]<=82.5) ||
                           (m==7&q==6&oliv[j+1]>79 & oliv[j+1]<=81) ||
                           (m==8&q==5&oliv[j+1]>77.5 & oliv[j+1]<=79) ||
                           (m==9&q==4&oliv[j+1]>76.5 & oliv[j+1]<=77.5) ||
                           (m==10&q==3&oliv[j+1]>75.5 & oliv[j+1]<=76.5) ||
                           (m==11&q==2&oliv[j+1]>72.5 & oliv[j+1]<=75.5) ||
                           (m==12&q==1&oliv[j+1]>69 & oliv[j+1]<=72.5)))
                           {
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+1]);
                        fprintf(arq_saida, " (%.2f", F14);
                        fprintf(arq_saida, " +/- %.2f)%% , ", inckk);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F15);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incll);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F16);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incmm);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F17);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incnn);
                        fprintf(arq_saida, str_mine[wwww]);
                        fprintf(arq_saida, " (%.2f", F18);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incoo);
                        fprintf(arq_saida, str_mine[wwwww]);
                        fprintf(arq_saida, " (%.2f", F19);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incpp);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F7);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){
                           fprintf(arq_saida, str_oxido[i+1]); /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                fclose(arq_saida);
                }
                
                /***  FIM DOS CÁLCULOS DA PMP  ***/
                            
  /*****   CÁLCULOS PARA QUALQUER TIPO DE MAGMATISMO    *****/ 
  else {
  printf("Arquivo das amostras: ");
  scanf("%s", nome_file_entrada1);
  printf("Arquivo das fases minerais: ");
  scanf("%s", nome_file_entrada2);
  if (opcao1==1){
  printf("Arquivo dos elementos tracos: ");
  scanf("%s", nome_file_entrada3);
  printf("Arquivo dos coeficientes de particao: ");
  scanf("%s", nome_file_entrada6);
  }
  printf("Arquivo de saida: ");
  scanf("%s", nome_file_saida);
  printf("Minimo da Media dos Erros Relativos: ");
  scanf("%f", &t);
  printf("Maximo da Media dos Erros Relativos: ");
  scanf("%f", &u);
  printf("Numero de amostras: ");
  scanf("%d", &n);
  if (opcao1==1){
  printf("Numero de elementos-traco: ");
  scanf("%d", &nn);
  }
  printf("Numero de minerais(max. 7): ");
  scanf("%d", &nnn);
  printf("\n\n\n");
  printf("AGUARDE, EM PROCESSAMENTO ... ");
  arq_saida = fopen(nome_file_saida, "w");
   if (opcao1==1){                    
  /*LEITURA DA MATRIZ DOS ELEMENTOS-TRAÇO*/
    arq_entrada3 = fopen(nome_file_entrada3, "r");
    for(i=0;i<=nn;i++){
        for(j=0;j<=n;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada3, "%s", &y);
            strcpy(str_traco[i], y);
            memcpy(str_traco[i], str_traco[i], MAX);
            }
            else{
            fscanf(arq_entrada3, "%f", &c[j]);
            Ti[i][j]=c[j];
            }
            }
            }
            fclose(arq_entrada3);
            for(i=1;i<=nn;i++){  /*Somente parte numérica*/
               for(j=1;j<=n;j++){  
               Tii[i-1][j-1]=Ti[i][j];
               }
               }
    }
  /*LEITURA DA MATRIZ DAS FASES MINERAIS*/
    arq_entrada2 = fopen(nome_file_entrada2, "r");
    for(i=0;i<=11;i++){
        for(l=0;l<=n*nnn+1;l++){
            if (i==0 || l==0){
            fscanf(arq_entrada2, "%s", &y);
            strcpy(str_minen[l], y);
            memcpy(str_minen[l], str_minen[l], MAX);
            }
            else{
            fscanf(arq_entrada2, "%f", &b[l]);
            Bi[i][l]=b[l];
            }
            }
            }
            fclose(arq_entrada2);
            for(i=1;i<=11;i++){  /*Somente parte numérica dos minerais*/
               for(l=1;l<=n*nnn+1;l++){  
               Bii[i-1][l-1]=Bi[i][l];
               }
               }
            
            /*INCERTEZAS DAS FASES MINERAIS*/
            INCMIN[0]=Bii[0][n*nnn]/100;
            INCMIN[1]=Bii[1][n*nnn]/100;
            INCMIN[2]=Bii[2][n*nnn]/100;
            INCMIN[3]=((0.9*Bii[3][n*nnn]+Bii[4][n*nnn])/1.9)/100;
            INCMIN[4]=Bii[5][n*nnn]/100;
            INCMIN[5]=Bii[6][n*nnn]/100;
            INCMIN[6]=Bii[7][n*nnn]/100;
            INCMIN[7]=Bii[8][n*nnn]/100;
            INCMIN[8]=Bii[9][n*nnn]/100;
            INCMIN[9]=Bii[10][n*nnn]/100;
            
            for(l=0;l<n*nnn;l++){ /*Transformação do Fe2O3 e FeO para FeOt*/                   
            Bnor[0][l]=Bii[0][l];
            Bnor[1][l]=Bii[1][l];
            Bnor[2][l]=Bii[2][l];
            Bnor[3][l]=0.9*Bii[3][l]+Bii[4][l];
            Bnor[4][l]=Bii[5][l];
            Bnor[5][l]=Bii[6][l];
            Bnor[6][l]=Bii[7][l];
            Bnor[7][l]=Bii[8][l];
            Bnor[8][l]=Bii[9][l];
            Bnor[9][l]=Bii[10][l];
            }
            for(l=0;l<n*nnn;l++){ /*Normalização a 100%*/
               inicial=0;
               for(i=0;i<10;i++){
               soma[l]=inicial+Bnor[i][l];
               inicial=soma[l];
               }
               for(i=0;i<10;i++){
                   Bn[i][l]=Bnor[i][l]/soma[l]*100;
                   }
               }
               
  /*LEITURA DA MATRIZ DAS AMOSTRAS*/
  arq_entrada1 = fopen(nome_file_entrada1, "r");
  for(i=0;i<12;i++){
        for(j=0;j<=n+1;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada1, "%s", &y);
            strcpy(str_oxido[i], y);
            memcpy(str_oxido[i], str_oxido[i], MAX);
            strcpy(str_amost[j], y);
            memcpy(str_amost[j], str_amost[j], MAX);
            }
            else{
            fscanf(arq_entrada1, "%f", &aa[j]);
            Aa[i][j]=aa[j];
            }
            }
            }
            fclose(arq_entrada1);
            
        /*"PESOS" REFERENTES ÀS INCERTEZAS DOS ÓXIDOS*/
            INC[0]=1/Aa[1][n+1];
            INC[1]=1/Aa[2][n+1];
            INC[2]=1/Aa[3][n+1];
            INC[3]=1/((0.9*Aa[4][n+1]+Aa[5][n+1])/1.9);
            INC[4]=1/Aa[6][n+1];
            INC[5]=1/Aa[7][n+1];
            INC[6]=1/Aa[8][n+1];
            INC[7]=1/Aa[9][n+1];
            INC[8]=1/Aa[10][n+1];
            INC[9]=1/Aa[11][n+1];
            
        for(j=0;j<=n;j++){ /*Transformação do Fe2O3 e FeO para FeOt*/                   
            A[1][j]=Aa[1][j];
            A[2][j]=Aa[2][j];
            A[3][j]=Aa[3][j];
            A[4][j]=0.9*Aa[4][j]+Aa[5][j];
            A[5][j]=Aa[6][j];
            A[6][j]=Aa[7][j];
            A[7][j]=Aa[8][j];
            A[8][j]=Aa[9][j];
            A[9][j]=Aa[10][j];
            A[10][j]=Aa[11][j];
            }
            for(j=1;j<=n;j++){ /*Normalização a 100%*/
               inicial=0;
               for(i=1;i<11;i++){
               soma[j]=inicial+A[i][j];
               inicial=soma[j];
               }
               for(i=1;i<11;i++){
                   F[i][j]=A[i][j]/soma[j]*100;
                   }
               }
        m=0;    /*Ordenação dos óxidos nas amostras segundo decréscimo de MgO*/
        for(j=1;j<=n;j++){
        p=0;
        m++;
          for(k=1;k<=n;k++){
            if(F[6][j]>=F[6][j+k-m]){
                 p++;
                 }
                 }
                 s=1+n-p;                       
                 for(i=1;i<11;i++){
                   G[i][s]=F[i][j];
                   for (ii=0;ii<nnn;ii++){  /*Ordenação dos óxidos nos minerais segundo decréscimo de MgO*/
                       B[i-1][s*nnn+ii-nnn]=Bn[i-1][(j-1)*nnn+ii];
                       strcpy(str_mine[s*nnn+ii-nnn], str_minen[(j-1)*nnn+ii+1]);
                       memcpy(str_mine[s], str_mine[s], MAX);
                       }           
                   }
                   if (opcao1==1){
                   for(i=1;i<=nn;i++){/*Ordenação dos traços segundo decréscimo de MgO*/ 
                   T[i][s]=Tii[i-1][j-1];
                   }
                   }
                   strcpy(str_amos[s], str_amost[j]);
                   memcpy(str_amos[s], str_amos[s], MAX);
        }
     if (opcao1==1){   
    /*LEITURA DA MATRIZ DOS COEFICIENTES DE PARTIÇÃO*/
    arq_entrada6 = fopen(nome_file_entrada6, "r");
    for(i=0;i<=nn;i++){
        for(j=0;j<7;j++){
            if (i==0 || j==0){
            fscanf(arq_entrada6, "%s", &y);
            strcpy(str_basica[j], y);
            memcpy(str_basica[j], str_basica[j], MAX);
            }
            else{
            fscanf(arq_entrada6, "%f", &d[j]);
            BASi[i][j]=d[j];
            }
            }
            }
            fclose(arq_entrada6);
            for(i=1;i<=nn;i++){  /*Somente parte numérica*/
               for(j=1;j<8;j++){  
               BAS[i-1][j-1]=BASi[i][j];
               }
               }
    }            
    /*CÁLCULOS PARA FRACIONAMENTO DE UM MINERAL*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE UM MINERAL:\n\n");
    for(j=0;j<n;j++){
        x++;
        for(l=0;l<nnn;l++){
            for(k=1;k<(n-x);k++){
                C[0][0]=C[0][1]=C[1][0]=C[1][1]=0;
                E[0][0]=E[1][0]=0;
                C[10][10]=C[11][11]=C[12][12]=C[13][13]=0;
                E[10][10]=E[11][11]=0;
                incb=incc=incd=inci=incj=incn=0;
                for(i=0;i<10;i++){                                                                        
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                                      
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine[i]=B[i][j*nnn+l];/*Vetor fases minerais*/ 
                    liq[i]=(G[i+1][j+1+k]);/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i]; 
                    v1[i]=C[0][0]+(mine[i]*INC[i]*INC[i]*mine[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v1a[i]=C[10][10]+(mine[i]*mine[i]/10000);
                    INCN[i]=incn+sqrt(INCMIN[i]*INCMIN[i]+INCMIN[i]*INCMIN[i])*mine[i]*mine[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCMIN[i]*INCMIN[i])*mine[i]*mine[i]/10000;
                    v2[i]=C[0][1]+(mine[i]*INC[i]*INC[i]*liq[i]/10000);
                    v2a[i]=C[11][11]+(mine[i]*liq[i]/10000);
                    INCB[i]=incb+sqrt(INCMIN[i]*INCMIN[i]+INCE[i]*INCE[i])*mine[i]*liq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCE[i]*INCE[i])*mine[i]*liq[i]/10000;
                    v3[i]=C[1][0]+(liq[i]*INC[i]*INC[i]*mine[i]/10000);
                    v3a[i]=C[12][12]+(liq[i]*mine[i]/10000);
                    INCC[i]=incc+sqrt(INCE[i]*INCE[i]+INCMIN[i]*INCMIN[i])*mine[i]*liq[i]/10000*sqrt(INCE[i]*INCE[i]+INCMIN[i]*INCMIN[i])*mine[i]*liq[i]/10000;
                    v4[i]=C[1][1]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    v4a[i]=C[13][13]+(liq[i]*liq[i]/10000);
                    INCD[i]=incd+sqrt(INCE[i]*INCE[i]+INCE[i]*INCE[i])*(liq[i]*liq[i]/10000)*sqrt(INCE[i]*INCE[i]+INCE[i]*INCE[i])*liq[i]*liq[i]/10000;
                    C[0][0]=v1[i];
                    C[10][10]=v1a[i];
                    incn=INCN[i];
                    C[0][1]=v2[i];
                    C[11][11]=v2a[i];
                    incb=INCB[i];
                    C[1][0]=v3[i];
                    C[12][12]=v3a[i];
                    incc=INCC[i];
                    C[1][1]=v4[i];
                    C[13][13]=v4a[i];
                    incd=INCD[i];
                    }
                    det=C[0][0]*C[1][1]-C[0][1]*C[1][0];
                    deta=C[12][12]/(C[10][10]*C[13][13]-C[11][11]*C[12][12]);
                    ince=sqrt(incd)*C[10][10]*C[13][13];
                    incf=sqrt(sqrt(incb)*sqrt(incb)+sqrt(incc)*sqrt(incc))*C[11][11]*C[12][12];
                    incg=sqrt(ince*ince+incf*incf);
                    D[0][0]=C[1][1]/det;/*Inversa do produto da matriz transposta pela matriz*/
                    D[1][0]=-C[1][0]/det;
                    inch=sqrt(incc*incc+incg*incg)*sqrt(deta*deta);
                    D[0][1]=-C[0][1]/det;
                    D[1][1]=C[0][0]/det;
                for(i=0;i<10;i++){    
                    v5[i]=E[0][0]+(mine[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v5a[i]=E[10][10]+(mine[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine[i]*solliq[i]/10000;
                    v6[i]=E[1][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v6a[i]=E[11][11]+(liq[i]*solliq[i]/10000);
                    INCJ[i]=incj+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v5[i];
                    inci=INCI[i];
                    E[1][0]=v6[i];
                    incj=INCJ[i];
                    E[10][10]=v5a[i];
                    E[11][11]=v6a[i];
                    }
                    F2=(D[1][0]*E[0][0]+D[1][1]*E[1][0])*100;/*Fração Total Subtraída do Magma Inicial*/
                    inck=sqrt(inch*inch+sqrt(inci)*sqrt(inci))*C[12][12]*E[10][10]*100;
                    incl=sqrt(incj)*C[10][10]*E[11][11]*100;
                    incm=sqrt(inck*inck+incl*incl); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F2<0 & F2>-100){ /*Condição para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo dos Erros Relativos dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=B[i][j*nnn+l]/100*F2+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F2);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                        
                if (Errorel>=t & Errorel<=u){  /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){       
                   Dg=BAS[ii][l];
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F2/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                        z=j+1+k;
                        if (Errorel>=t & Errorel<=u){
                           fprintf(arq_saida, "Evolução: ");
                           fprintf(arq_saida, str_amos[j+1]);
                           fprintf(arq_saida," a ");
                           fprintf(arq_saida, str_amos[z]);
                           fprintf(arq_saida, "\n");
                           fprintf(arq_saida, "Mineral Fracionado: ");
                           fprintf(arq_saida, str_mine[l+j*nnn]);
                           fprintf(arq_saida, " (100%%)\nSubtraído do Magma Inicial: (%.2f", -1*F2);
                           fprintf(arq_saida, " +/- %.2f)%%\n\n", incm);
                           fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){          /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }                                        
                    }                 
                    }
                    }
                    }
     
    /*CÁLCULOS PARA FRACIONAMENTO DE DOIS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE DOIS MINERAIS:\n\n");
    for(j=0;j<n;j++){
        x++;
        p=-1;
        for(l=0;l<(nnn-1);l++){
          p++;
          for(m=1;m<(nnn-p);m++){
            for(k=1;k<(n-x);k++){
                C[0][0]=C[0][1]=C[0][2]=C[1][0]=C[1][1]=C[1][2]=C[2][0]=C[2][1]=C[2][2]=0;
                E[0][0]=E[1][0]=E[2][0]=0;
                E[10][10]=E[11][11]=E[12][12]=0;
                H[0][0]=H[0][1]=H[1][0]=H[1][1]=0;
                H[10][10]=H[11][11]=H[12][12]=H[13][13]=0;
                J[0][0]=J[1][0]=0;
                J[10][10]=J[11][11]=0;
                incs=inct=incu=incdd=incee=0;
                for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incerteza dos óxidos*/                                                     
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    liq[i]=(G[i+1][j+1+k]);/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v4[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v5[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v6[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v7[i]=C[2][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v8[i]=C[2][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v9[i]=C[2][2]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[1][0]=v4[i];
                    C[1][1]=v5[i];
                    C[1][2]=v6[i];
                    C[2][0]=v7[i];
                    C[2][1]=v8[i];
                    C[2][2]=v9[i];
                    }
                    det=C[0][0]*C[1][1]*C[2][2]+C[0][1]*C[1][2]*C[2][0]+C[0][2]*C[1][0]*C[2][1]-C[0][1]*C[1][0]*C[2][2]-C[0][0]*C[1][2]*C[2][1]-C[0][2]*C[1][1]*C[2][0];
                    /*Inversa do produto da matriz transposta pela matriz*/
                    D[0][0]=(C[1][1]*C[2][2]-C[1][2]*C[2][1])/det;
                    D[1][0]=(C[1][2]*C[2][0]-C[1][0]*C[2][2])/det;
                    D[2][0]=(C[1][0]*C[2][1]-C[1][1]*C[2][0])/det;
                    D[0][1]=(C[0][2]*C[2][1]-C[0][1]*C[2][2])/det;
                    D[1][1]=(C[0][0]*C[2][2]-C[0][2]*C[2][0])/det;
                    D[2][1]=(C[0][1]*C[2][0]-C[0][0]*C[2][1])/det;
                    D[0][2]=(C[0][1]*C[1][2]-C[0][2]*C[1][1])/det;
                    D[1][2]=(C[0][2]*C[1][0]-C[0][0]*C[1][2])/det;
                    D[2][2]=(C[0][0]*C[1][1]-C[0][1]*C[1][0])/det;
                    for(i=0;i<10;i++){
                    v10[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v10a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCS[i]=incs+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v11[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v11a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCT[i]=inct+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v12[i]=E[2][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v12a[i]=E[12][12]+(liq[i]*solliq[i]/10000);
                    INCU[i]=incu+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v10[i];
                    E[10][10]=v10a[i];
                    incs=INCS[i];
                    E[1][0]=v11[i];
                    E[11][11]=v11a[i];
                    inct=INCT[i];
                    E[2][0]=v12[i];
                    E[12][12]=v12a[i];
                    incu=INCU[i];
                    }
                    F3=(D[2][0]*E[0][0]+D[2][1]*E[1][0]+D[2][2]*E[2][0])*100;/*Fração subtraída do magma inicial*/
                    incv=sqrt(incs)*D[2][0]*E[10][10]*100;
                    incx=sqrt(inct)*D[2][1]*E[11][11]*100;
                    incz=sqrt(incu)*D[2][2]*E[12][12]*100;
                    incw=sqrt(incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F3<0 & F3>-100){ /*Condição para evitar cálculos desnecessários*/
                 for(i=0;i<10;i++){
                    v13[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v13a[i]=H[10][10]+(mine1[i]*mine1[i]/10000);
                    v14[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v14a[i]=H[11][11]+(mine1[i]*mine2[i]/10000);
                    v15[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v15a[i]=H[12][12]+(mine2[i]*mine1[i]/10000);
                    v16[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v16a[i]=H[13][13]+(mine2[i]*mine2[i]/10000);
                    H[0][0]=v13[i];
                    H[10][10]=v13a[i];
                    H[0][1]=v14[i];
                    H[11][11]=v14a[i];
                    H[1][0]=v15[i];
                    H[12][12]=v15a[i];
                    H[1][1]=v16[i];
                    H[13][13]=v16a[i];
                    }
                    det1=H[0][0]*H[1][1]-H[0][1]*H[1][0];
                    det1a=H[10][10]*H[13][13]-H[11][11]*H[12][12];
                    I[0][0]=H[1][1]/det1;/*Inversa do produto da matriz transposta pela matriz*/
                    I[10][10]=H[13][13]/det1a;
                    I[1][0]=-H[1][0]/det1;
                    I[11][11]=H[12][12]/det1a;
                    I[0][1]=-H[0][1]/det1;
                    I[12][12]=H[11][11]/det1a;
                    I[1][1]=H[0][0]/det1;
                    I[13][13]=H[10][10]/det1a;
                 for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F3/100)/((-1)*F3/100);
                    incy=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    incaa=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F3/100;
                    incbb=sqrt(incy*incy+incaa*incaa);
                    INCH[i]=sqrt(incbb*incbb+incw*incw/10000)*cum[i]/100;
                    v17[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor cumulato*/
                    v17a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCDD[i]=incdd+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v18[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v18a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCEE[i]=incee+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    J[0][0]=v17[i];
                    J[10][10]=v17a[i];
                    incdd=INCDD[i];
                    J[1][0]=v18[i];
                    J[11][11]=v18a[i];
                    incee=INCEE[i];
                    }
                    F4=(I[0][0]*J[0][0]+I[0][1]*J[1][0]);
                    incff=sqrt(incdd)*I[10][10]*J[10][10];
                    incgg=sqrt(incee)*I[12][12]*J[11][11];
                    inchh=sqrt(incff*incff+incgg*incgg);
                    F5=(I[1][0]*J[0][0]+I[1][1]*J[1][0]);
                    incii=sqrt(incdd)*I[11][11]*J[10][10];
                    incjj=sqrt(incee)*I[13][13]*J[11][11];
                    inckk=sqrt(incii*incii+incjj*incjj);
                    ML=(1-F4-F5)/(I[0][0]+I[0][1]+I[1][0]+I[1][1]); /*Multiplicador de Lagrange*/
                    incll=sqrt(inchh*inchh+inckk*inckk)*ML;
                    F6=(ML*(I[0][0]+I[0][1])+F4)*100;/*Fração Mineral 1*/
                    incnn=sqrt(inchh*inchh+incll*incll)*F6; /*incerteza do mineral 1*/
                    F7=(ML*(I[1][0]+I[1][1])+F5)*100;/*Fração Mineral 2*/
                    incpp=sqrt(inckk*inckk+incll*incll)*F7; /*incerteza do mineral 2*/
                    }
                if (F3<0 & F3>-100 & F6>0 & F7>0){
                    inicial=0;/*Cálculo do erro relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F6*F3)/10000+(B[i][j*nnn+l+m]*F7*F3)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F3);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;

                if (Errorel>=t & Errorel<=u){ /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ 
                   Dg=F6/100*BAS[ii][l]+F7/100*BAS[ii][l+m];
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F3/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                    z=j+1+k;
                    w=l+j*nnn+m;
                    if (Errorel>=t & Errorel<=u) {
                       fprintf(arq_saida, "Evolução: ");
                       fprintf(arq_saida, str_amos[j+1]);
                       fprintf(arq_saida," a ");
                       fprintf(arq_saida, str_amos[z]);
                       fprintf(arq_saida, "\n");
                       fprintf(arq_saida, "Minerais Fracionados: ");
                       fprintf(arq_saida, str_mine[l+j*nnn]);
                       fprintf(arq_saida, " (%.2f", F6);
                       fprintf(arq_saida, " +/- %.2f)%% e ", incnn);
                       fprintf(arq_saida, str_mine[w]);
                       fprintf(arq_saida, " (%.2f", F7);
                       fprintf(arq_saida, " +/- %.2f)%%\n", incpp);
                       fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F3);
                       fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                       fprintf(arq_saida, "Erros Relativos (maiores):\n");
                       for(i=0;i<11;i++){
                           if (i<3){         /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                           }
                           }
                    }
                    }
                    }
                    }
                    }
    /*CÁLCULOS PARA FRACIONAMENTO DE TRÊS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE TRÊS MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<(nnn-2);l++){
        p++;
        r=-1;
        for(m=1;m<(nnn-1-p);m++){
          r++;
          for(q=1;q<(nnn-1-r);q++){
           if (l==0&l+m+q<=nnn || l==1&l+m+q<=nnn-1 || l==2&l+m+q<=nnn-2 || l==3&l+m+q<=nnn-3){
            for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[1][0]=H[1][1]=H[1][2]=H[2][0]=H[2][1]=H[2][2]=0;
                    J[0][0]=J[1][0]=J[2][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=0;
                for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                    
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][j*nnn+l+m+q];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v5[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v6[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v7[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v8[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v9[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v10[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v11[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v12[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v13[i]=C[3][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v14[i]=C[3][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v15[i]=C[3][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v16[i]=C[3][3]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[1][0]=v5[i];
                    C[1][1]=v6[i];
                    C[1][2]=v7[i];
                    C[1][3]=v8[i];
                    C[2][0]=v9[i];
                    C[2][1]=v10[i];
                    C[2][2]=v11[i];
                    C[2][3]=v12[i];
                    C[3][0]=v13[i];
                    C[3][1]=v14[i];
                    C[3][2]=v15[i];
                    C[3][3]=v16[i];
                    }
                for (zz=0;zz<4;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][4]=1;
                    C[1][4]=C[2][4]=C[3][4]=0;
                    }
                    if (zz==1){
                    C[0][4]=0;
                    C[1][4]=1;
                    C[2][4]=C[3][4]=0;
                    }
                    if (zz==2){
                    C[0][4]=C[1][4]=0;
                    C[2][4]=1;
                    C[3][4]=0;
                    }
                    if (zz==3){
                    C[0][4]=C[1][4]=C[2][4]=0;
                    C[3][4]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    for (ii=1;ii<4;ii++){
                        for (jj=0;jj<5;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[4]=Da[2][1]/Da[1][1];
                    pivo[5]=Da[3][1]/Da[1][1];
                    for (ii=2;ii<4;ii++){
                        for (jj=1;jj<5;jj++){
                        Db[ii][jj]=(-1*pivo[ii+2]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[6]=Db[3][2]/Db[2][2];
                    for (ii=3;ii<4;ii++){
                        for (jj=2;jj<5;jj++){
                        Dc[ii][jj]=(-pivo[ii+3]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    D[3][zz]=Dc[3][4]/Dc[3][3];
                    D[2][zz]=(Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];
                    }
                    incb=incc=incd=incf=incj=inck=incl=0;
                    for(i=0;i<10;i++){
                    v17[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v17a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v18[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v18a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v19[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v19a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v20[i]=E[3][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v20a[i]=E[13][13]+(liq[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v17[i];/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    E[10][10]=v17a[i];
                    incb=INCB[i];
                    E[1][0]=v18[i];
                    E[11][11]=v18a[i];
                    incc=INCC[i];
                    E[2][0]=v19[i];
                    E[12][12]=v19a[i];
                    incd=INCD[i];
                    E[3][0]=v20[i];
                    E[13][13]=v20a[i];
                    incf=INCF[i];
                    }
                    F4=(D[3][0]*E[0][0]+D[3][1]*E[1][0]+D[3][2]*E[2][0]+D[3][3]*E[3][0])*100;/*Fração subtraída do magma inicial*/
                    incu=sqrt(incb)*D[3][0]*E[10][10];
                    incv=sqrt(incc)*D[3][1]*E[11][11];
                    incx=sqrt(incd)*D[3][2]*E[12][12];
                    incz=sqrt(incf)*D[3][3]*E[13][13];                    
                    incw=sqrt(incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F4<0 & F4>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v21[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v22[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v23[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v24[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v25[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v26[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v27[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v28[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v29[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    H[0][0]=v21[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v22[i];
                    H[0][2]=v23[i];
                    H[1][0]=v24[i];
                    H[1][1]=v25[i];
                    H[1][2]=v26[i];
                    H[2][0]=v27[i];
                    H[2][1]=v28[i];
                    H[2][2]=v29[i];
                    }
                    det1=H[0][0]*H[1][1]*H[2][2]+H[0][1]*H[1][2]*H[2][0]+H[0][2]*H[1][0]*H[2][1]-H[0][1]*H[1][0]*H[2][2]-H[0][0]*H[1][2]*H[2][1]-H[0][2]*H[1][1]*H[2][0];
                    I[0][0]=(H[1][1]*H[2][2]-H[1][2]*H[2][1])/det1;/*Inversa do produto da matriz transposta pela matriz*/
                    I[1][0]=(H[1][2]*H[2][0]-H[1][0]*H[2][2])/det1;
                    I[2][0]=(H[1][0]*H[2][1]-H[1][1]*H[2][0])/det1;
                    I[0][1]=(H[0][2]*H[2][1]-H[0][1]*H[2][2])/det1;
                    I[1][1]=(H[0][0]*H[2][2]-H[0][2]*H[2][0])/det1;
                    I[2][1]=(H[0][1]*H[2][0]-H[0][0]*H[2][1])/det1;
                    I[0][2]=(H[0][1]*H[1][2]-H[0][2]*H[1][1])/det1;
                    I[1][2]=(H[0][2]*H[1][0]-H[0][0]*H[1][2])/det1;
                    I[2][2]=(H[0][0]*H[1][1]-H[0][1]*H[1][0])/det1;
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F4/100)/((-1)*F4/100);
                    incg=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inch=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F4/100;
                    inci=sqrt(incg*incg+inch*inch);
                    INCH[i]=sqrt(inci*inci+incw*incw/10000)*cum[i]/100;                  
                    v30[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v30a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCJ[i]=incj+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v31[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v31a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCK[i]=inck+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v32[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v32a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCL[i]=incl+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    J[0][0]=v30[i];
                    J[10][10]=v30a[i];
                    incj=INCJ[i];
                    J[1][0]=v31[i];
                    J[11][11]=v31a[i];
                    inck=INCK[i];
                    J[2][0]=v32[i];
                    J[12][12]=v32a[i];
                    incl=INCL[i];
                    }
                    F5=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]);
                    incm=sqrt(incj)*J[10][10];
                    incn=sqrt(inck)*J[11][11];
                    inco=sqrt(incl)*J[12][12];
                    incp=sqrt(incm*incm+incn*incn+inco*inco);
                    F6=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]);
                    F7=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]);
                    ML=(1-F5-F6-F7)/(I[0][0]+I[0][1]+I[0][2]+I[1][0]+I[1][1]+I[1][2]+I[2][0]+I[2][1]+I[2][2]); /*Multiplicador de Lagrange*/
                    incq=sqrt(incp*incp*3)*ML;
                    F8=(ML*(I[0][0]+I[0][1]+I[0][2])+F5)*100; /*Fração Mineral 1*/
                    incr=sqrt(incp*incp+incq*incq)*F8; /*incerteza do mineral 1*/
                    F9=(ML*(I[1][0]+I[1][1]+I[1][2])+F6)*100; /*Fração Mineral 2*/
                    incs=sqrt(incp*incp+incq*incq)*F9; /*incerteza do mineral 2*/
                    F10=(ML*(I[2][0]+I[2][1]+I[2][2])+F7)*100; /*Fração Mineral 3*/
                    inct=sqrt(incp*incp+incq*incq)*F10; /*incerteza do mineral 3*/
                    }
                if (F4<0 & F4>-100 & F8>0 & F9>0 & F10>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro percentual relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F8*F4)/10000+(B[i][j*nnn+l+m]*F9*F4)/10000+(B[i][j*nnn+l+m+q]*F10*F4)/10000+G[i+1][j+1];
                       if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F4);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
               
                if (Errorel>=t & Errorel<=u){   /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ 
                   Dg=(F8*BAS[ii][l]+F9*BAS[ii][l+m]+F10*BAS[ii][l+m+q])/100;
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F4/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                    z=j+1+k; 
                    w=l+j*nnn+m;
                    ww=l+j*nnn+m+q;
                    if (Errorel>=t & Errorel<=u){
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+j*nnn]);
                        fprintf(arq_saida, " (%.2f", F8);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incr);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F9);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incs);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F10);
                        fprintf(arq_saida, " +/- %.2f)%%\n", inct);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F4);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){     /*Condição para não imprimir Fe2O3 e sim FeO*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }                                                    
                    }
                    }
                    }
                    }
                    }
                    }
                    }
    /*CÁLCULOS PARA FRACIONAMENTO DE QUATRO MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE QUATRO MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<(nnn-3);l++){
        p++;
        r=-1;
        for(m=1;m<(nnn-2-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(nnn-2-r);q++){
            rr++;
            for(v=1;v<(nnn-2-rr);v++){
             if (l==0&l+m+q+v<=nnn || l==1&l+m+q+v<=nnn-1 || l==2&l+m+q+v<=nnn-2 || l==3&l+m+q+v<=nnn-3 || l==4&l+m+q+v<=nnn-4){                                              
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=0;        
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                    
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][j*nnn+l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][j*nnn+l+m+q+v];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v6[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v7[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v8[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v9[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v10[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v11[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v12[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v13[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v14[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v15[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v16[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v17[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v18[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v19[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v20[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v21[i]=C[4][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v22[i]=C[4][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v23[i]=C[4][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v24[i]=C[4][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v25[i]=C[4][4]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[1][0]=v6[i];
                    C[1][1]=v7[i];
                    C[1][2]=v8[i];
                    C[1][3]=v9[i];
                    C[1][4]=v10[i];
                    C[2][0]=v11[i];
                    C[2][1]=v12[i];
                    C[2][2]=v13[i];
                    C[2][3]=v14[i];
                    C[2][4]=v15[i];
                    C[3][0]=v16[i];
                    C[3][1]=v17[i];
                    C[3][2]=v18[i];
                    C[3][3]=v19[i];
                    C[3][4]=v20[i];
                    C[4][0]=v21[i];
                    C[4][1]=v22[i];
                    C[4][2]=v23[i];
                    C[4][3]=v24[i];
                    C[4][4]=v25[i];
                    }
                for (zz=0;zz<5;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][5]=1;
                    C[1][5]=C[2][5]=C[3][5]=C[4][5]=0;
                    }
                    if (zz==1){
                    C[0][5]=0;
                    C[1][5]=1;
                    C[2][5]=C[3][5]=C[4][5]=0;
                    }
                    if (zz==2){
                    C[0][5]=C[1][5]=0;
                    C[2][5]=1;
                    C[3][5]=C[4][5]=0;
                    }
                    if (zz==3){
                    C[0][5]=C[1][5]=C[2][5]=0;
                    C[3][5]=1;
                    C[4][5]=0;
                    }
                    if (zz==4){
                    C[0][5]=C[1][5]=C[2][5]=C[3][5]=0;
                    C[4][5]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    for (ii=1;ii<5;ii++){
                        for (jj=0;jj<6;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[5]=Da[2][1]/Da[1][1];
                    pivo[6]=Da[3][1]/Da[1][1];
                    pivo[7]=Da[4][1]/Da[1][1];
                    for (ii=2;ii<5;ii++){
                        for (jj=1;jj<6;jj++){
                        Db[ii][jj]=(-1*pivo[ii+3]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[8]=Db[3][2]/Db[2][2];
                    pivo[9]=Db[4][2]/Db[2][2];
                    for (ii=3;ii<5;ii++){
                        for (jj=2;jj<6;jj++){
                        Dc[ii][jj]=(-pivo[ii+5]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[10]=Dc[4][3]/Dc[3][3];
                    for (ii=4;ii<5;ii++){
                        for (jj=3;jj<6;jj++){
                        Dd[ii][jj]=(-pivo[ii+6]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    D[4][zz]=Dd[4][5]/Dd[4][4];
                    D[3][zz]=(Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inck=incl=incm=incn=0;
                    for(i=0;i<10;i++){
                    v26[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v26a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine1[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine1[i]*solliq[i]/10000;
                    v27[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v27a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine2[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine2[i]*solliq[i]/10000;
                    v28[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v28a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine3[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine3[i]*solliq[i]/10000;
                    v29[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v29a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine4[i]*solliq[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCA[i]*INCA[i])*mine4[i]*solliq[i]/10000;
                    v30[i]=E[4][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v30a[i]=E[14][14]+(liq[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v26[i];/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    E[10][10]=v26a[i];
                    incb=INCB[i];
                    E[1][0]=v27[i];
                    E[11][11]=v27a[i];
                    incc=INCC[i];
                    E[2][0]=v28[i];
                    E[12][12]=v28a[i];
                    incd=INCD[i];
                    E[3][0]=v29[i];
                    E[13][13]=v29a[i];
                    incf=INCF[i];
                    E[4][0]=v30[i];
                    E[14][14]=v30a[i];
                    incg=INCG[i];
                    }
                    F5=(D[4][0]*E[0][0]+D[4][1]*E[1][0]+D[4][2]*E[2][0]+D[4][3]*E[3][0]+D[4][4]*E[4][0])*100;/*Fração subtraída do magma inicial*/
                    inct=sqrt(incb)*D[4][0]*E[10][10];
                    incu=sqrt(incc)*D[4][1]*E[11][11];
                    incv=sqrt(incd)*D[4][2]*E[12][12];
                    incx=sqrt(incf)*D[4][3]*E[13][13];
                    incz=sqrt(incg)*D[4][4]*E[14][14];                    
                    incw=sqrt(inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F5<0 & F5>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v31[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v32[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v33[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v34[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v35[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v36[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v37[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v38[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v39[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v40[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v41[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v42[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v43[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    H[0][0]=v31[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v32[i];
                    H[0][2]=v33[i];
                    H[0][3]=v34[i];
                    H[1][0]=v35[i];
                    H[1][1]=v36[i];
                    H[1][2]=v37[i];
                    H[1][3]=v38[i];
                    H[2][0]=v39[i];
                    H[2][1]=v40[i];
                    H[2][2]=v41[i];
                    H[2][3]=v42[i];
                    H[3][0]=v43[i];
                    H[3][1]=v44[i];
                    H[3][2]=v45[i];
                    H[3][3]=v46[i];/*Inversa do produto da matriz transposta pela matriz*/
                    }
                for (pp=0;pp<4;pp++){
                    if (pp==0){
                    H[0][4]=1;
                    H[1][4]=H[2][4]=H[3][4]=0;
                    }
                    if (pp==1){
                    H[0][4]=0;
                    H[1][4]=1;
                    H[2][4]=H[3][4]=0;
                    }
                    if (pp==2){
                    H[0][4]=H[1][4]=0;
                    H[2][4]=1;
                    H[3][4]=0;
                    }
                    if (pp==3){
                    H[0][4]=H[1][4]=H[2][4]=0;
                    H[3][4]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    for (ii=1;ii<4;ii++){
                        for (jj=0;jj<5;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[4]=Ia[2][1]/Ia[1][1];
                    pivo[5]=Ia[3][1]/Ia[1][1];
                    for (ii=2;ii<4;ii++){
                        for (jj=1;jj<5;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+2]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[6]=Ib[3][2]/Ib[2][2];
                    for (ii=3;ii<4;ii++){
                        for (jj=2;jj<5;jj++){
                        Ic[ii][jj]=(-pivo[ii+3]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    I[3][pp]=Ic[3][4]/Ic[3][3];
                    I[2][pp]=(Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F5/100)/((-1)*F5/100);
                    inch=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inci=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F5/100;
                    incj=sqrt(inci*inci+inch*inch);
                    INCH[i]=sqrt(incj*incj+incw*incw/10000)*cum[i]/100;
                    v47[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v47a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCK[i]=inck+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine1[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine1[i]*cum[i]/10000;
                    v48[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v48a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCL[i]=incl+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine2[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine2[i]*cum[i]/10000;
                    v49[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v49a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCM[i]=incm+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine3[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine3[i]*cum[i]/10000;
                    v50[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v50a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine4[i]*cum[i]/10000*sqrt(INCMIN[i]*INCMIN[i]+INCH[i]*INCH[i])*mine4[i]*cum[i]/10000;
                    J[0][0]=v47[i];
                    J[10][10]=v47a[i];
                    inck=INCK[i];
                    J[1][0]=v48[i];
                    J[11][11]=v48a[i];
                    incl=INCL[i];
                    J[2][0]=v49[i];
                    J[12][12]=v49a[i];
                    incm=INCM[i];
                    J[3][0]=v50[i];
                    J[13][13]=v50a[i];
                    incn=INCN[i];
                    }
                    F6=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]);/*Fração cristalizada*/
                    inco=sqrt(inck)*J[10][10];
                    incp=sqrt(incl)*J[11][11];
                    incq=sqrt(incm)*J[12][12];
                    incr=sqrt(incn)*J[13][13];
                    incs=sqrt(inco*inco+incp*incp+incq*incq+incr*incr);
                    F7=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]);
                    F8=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]);
                    F9=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]);
                    ML=(1-F6-F7-F8-F9)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[3][0]+I[3][1]+I[3][2]+I[3][3]); /*Multiplicador de Lagrange*/
                    inct=sqrt(incs*incs*4)*ML;
                    F10=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3])+F6)*100; /*Fração Mineral 1*/
                    incu=sqrt(incs*incs+inct*inct)*F10; /*incerteza do mineral 1*/
                    F11=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3])+F7)*100; /*Fração Mineral 2*/
                    incv=sqrt(incs*incs+inct*inct)*F11; /*incerteza do mineral 2*/
                    F12=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3])+F8)*100; /*Fração Mineral 3*/
                    incx=sqrt(incs*incs+inct*inct)*F12; /*incerteza do mineral 3*/
                    F13=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3])+F9)*100; /*Fração Mineral 4*/
                    incz=sqrt(incs*incs+inct*inct)*F13; /*incerteza do mineral 4*/
                    }
                if (F5<0 & F5>-100 & F10>0 & F11>0 & F12>0 & F13>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F10*F5)/10000+(B[i][j*nnn+l+m]*F11*F5)/10000+(B[i][j*nnn+l+m+q]*F12*F5)/10000+(B[i][j*nnn+l+m+q+v]*F13*F5)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F5);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                      
                if (Errorel>=t & Errorel<=u){   /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ 
                   Dg=(F10*BAS[ii][l]+F11*BAS[ii][l+m]+F12*BAS[ii][l+m+q]+F13*BAS[ii][l+m+q+v])/100;
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F5/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+j*nnn+m;
                   ww=l+j*nnn+m+q;
                   www=l+j*nnn+m+q+v;
                   if (Errorel>=t & Errorel<=u){
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+j*nnn]);
                        fprintf(arq_saida, " (%.2f", F10);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incu);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F11);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incv);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F12);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incx);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F13);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incz);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F5);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){         /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }                                          
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
    /*CÁLCULO PARA FRACIONAMENTO DE CINCO MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE CINCO MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<nnn-4;l++){
        p++;
        r=-1;
        for(m=1;m<(nnn-3-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(nnn-3-r);q++){
            rr++;
            rrr=-1;
            for(v=1;v<(nnn-3-rr);v++){
              rrr++;
              for(vv=1;vv<(nnn-3-rrr);vv++){
                /*seleção para diminuir tempo de cálculo*/
                if (l==0&l+m+q+v+vv<=nnn || l==1&l+m+q+v+vv<=nnn-1 || l==2&l+m+q+v+vv<=nnn-2 || l==3&l+m+q+v+vv<=nnn-3){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[0][5]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[1][5]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[2][5]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[3][5]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=C[4][5]=C[5][0]=C[5][1]=C[5][2]=C[5][3]=C[5][4]=C[5][5]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=E[5][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=E[15][15]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[0][4]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[1][4]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[2][4]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=H[3][4]=H[4][0]=H[4][1]=H[4][2]=H[4][3]=H[4][4]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=J[4][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=J[14][14]=0;
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incerteza dos óxidos*/                                                     
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][j*nnn+l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][j*nnn+l+m+q+v];/*Vetor fase mineral*/
                    mine5[i]=B[i][j*nnn+l+m+q+v+vv];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v6[i]=C[0][5]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v7[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v8[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v9[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v10[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v11[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v12[i]=C[1][5]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v13[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v14[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v15[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v16[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v17[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v18[i]=C[2][5]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v19[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v20[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v21[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v22[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v23[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v24[i]=C[3][5]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v25[i]=C[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v26[i]=C[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v27[i]=C[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v28[i]=C[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v29[i]=C[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v30[i]=C[4][5]+(mine5[i]*INC[i]*INC[i]*liq[i]/10000);
                    v31[i]=C[5][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v32[i]=C[5][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v33[i]=C[5][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v34[i]=C[5][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v35[i]=C[5][4]+(liq[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v36[i]=C[5][5]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[0][5]=v6[i];
                    C[1][0]=v7[i];
                    C[1][1]=v8[i];
                    C[1][2]=v9[i];
                    C[1][3]=v10[i];
                    C[1][4]=v11[i];
                    C[1][5]=v12[i];
                    C[2][0]=v13[i];
                    C[2][1]=v14[i];
                    C[2][2]=v15[i];
                    C[2][3]=v16[i];
                    C[2][4]=v17[i];
                    C[2][5]=v18[i];
                    C[3][0]=v19[i];
                    C[3][1]=v20[i];
                    C[3][2]=v21[i];
                    C[3][3]=v22[i];
                    C[3][4]=v23[i];
                    C[3][5]=v24[i];
                    C[4][0]=v25[i];
                    C[4][1]=v26[i];
                    C[4][2]=v27[i];
                    C[4][3]=v28[i];
                    C[4][4]=v29[i];
                    C[4][5]=v30[i];
                    C[5][0]=v31[i];
                    C[5][1]=v32[i];
                    C[5][2]=v33[i];
                    C[5][3]=v34[i];
                    C[5][4]=v35[i];
                    C[5][5]=v36[i];
                    }
                for (zz=0;zz<6;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][6]=1;
                    C[1][6]=C[2][6]=C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==1){
                    C[0][6]=0;
                    C[1][6]=1;
                    C[2][6]=C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==2){
                    C[0][6]=C[1][6]=0;
                    C[2][6]=1;
                    C[3][6]=C[4][6]=C[5][6]=0;
                    }
                    if (zz==3){
                    C[0][6]=C[1][6]=C[2][6]=0;
                    C[3][6]=1;
                    C[4][6]=C[5][6]=0;
                    }
                    if (zz==4){
                    C[0][6]=C[1][6]=C[2][6]=C[3][6]=0;
                    C[4][6]=1;
                    C[5][6]=0;
                    }
                    if (zz==5){
                    C[0][6]=C[1][6]=C[2][6]=C[3][6]=C[4][6]=0;
                    C[5][6]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    pivo[5]=C[5][0]/C[0][0];
                    for (ii=1;ii<6;ii++){
                        for (jj=0;jj<7;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[6]=Da[2][1]/Da[1][1];
                    pivo[7]=Da[3][1]/Da[1][1];
                    pivo[8]=Da[4][1]/Da[1][1];
                    pivo[9]=Da[5][1]/Da[1][1];
                    for (ii=2;ii<6;ii++){
                        for (jj=1;jj<7;jj++){
                        Db[ii][jj]=(-1*pivo[ii+4]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[10]=Db[3][2]/Db[2][2];
                    pivo[11]=Db[4][2]/Db[2][2];
                    pivo[12]=Db[5][2]/Db[2][2];
                    for (ii=3;ii<6;ii++){
                        for (jj=2;jj<7;jj++){
                        Dc[ii][jj]=(-1*pivo[ii+7]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[13]=Dc[4][3]/Dc[3][3];
                    pivo[14]=Dc[5][3]/Dc[3][3];
                    for (ii=4;ii<6;ii++){
                        for (jj=3;jj<7;jj++){
                        Dd[ii][jj]=(-1*pivo[ii+9]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    pivo[15]=Dd[5][4]/Dd[4][4];
                    for (ii=5;ii<6;ii++){
                        for (jj=4;jj<7;jj++){
                        De[ii][jj]=(-1*pivo[ii+10]*Dd[4][jj])+Dd[ii][jj];
                        }
                        }
                    D[5][zz]=De[5][6]/De[5][5];
                    D[4][zz]=(Dd[4][6]-D[5][zz]*Dd[4][5])/Dd[4][4];
                    D[3][zz]=(Dc[3][6]-D[5][zz]*Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][6]-D[5][zz]*Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][6]-D[5][zz]*Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][6]-D[5][zz]*C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inci=incm=incn=inco=incp=incq=0;
                    for(i=0;i<10;i++){
                    v37[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v37a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v38[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v38a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v39[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v39a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v40[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v40a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000;
                    v41[i]=E[4][0]+(mine5[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v41a[i]=E[14][14]+(mine5[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000;
                    v42[i]=E[5][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v42a[i]=E[15][15]+(liq[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v37[i];
                    E[10][10]=v37a[i];
                    incb=INCB[i];
                    E[1][0]=v38[i];
                    E[11][11]=v38a[i];
                    incc=INCC[i];
                    E[2][0]=v39[i];
                    E[12][12]=v39a[i];
                    incd=INCD[i];
                    E[3][0]=v40[i];
                    E[13][13]=v40a[i];
                    incf=INCF[i];
                    E[4][0]=v41[i];
                    E[14][14]=v41a[i];
                    incg=INCG[i];
                    E[5][0]=v42[i];
                    E[15][15]=v42a[i];
                    inci=INCI[i];
                    }
                    F6=(D[5][0]*E[0][0]+D[5][1]*E[1][0]+D[5][2]*E[2][0]+D[5][3]*E[3][0]+D[5][4]*E[4][0]+D[5][5]*E[5][0])*100;/*Fração subtraída do magma inicial*/
                    incs=sqrt(incb)*D[5][0]*E[10][10];
                    inct=sqrt(incc)*D[5][1]*E[11][11];
                    incu=sqrt(incd)*D[5][2]*E[12][12];
                    incv=sqrt(incf)*D[5][3]*E[13][13];
                    incx=sqrt(incg)*D[5][4]*E[14][14];
                    incz=sqrt(inci)*D[5][5]*E[15][15];                    
                    incw=sqrt(incs*incs+inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F6<0 & F6>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v43[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v47[i]=H[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v48[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v49[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v50[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v51[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v52[i]=H[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v53[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v54[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v55[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v56[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v57[i]=H[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v58[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v59[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v60[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v61[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v62[i]=H[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v63[i]=H[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v64[i]=H[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v65[i]=H[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v66[i]=H[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v67[i]=H[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    H[0][0]=v43[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v44[i];
                    H[0][2]=v45[i];
                    H[0][3]=v46[i];
                    H[0][4]=v47[i];
                    H[1][0]=v48[i];
                    H[1][1]=v49[i];
                    H[1][2]=v50[i];
                    H[1][3]=v51[i];
                    H[1][4]=v52[i];
                    H[2][0]=v53[i];
                    H[2][1]=v54[i];
                    H[2][2]=v55[i];
                    H[2][3]=v56[i];
                    H[2][4]=v57[i];
                    H[3][0]=v58[i];
                    H[3][1]=v59[i];
                    H[3][2]=v60[i];
                    H[3][3]=v61[i];
                    H[3][4]=v62[i];
                    H[4][0]=v63[i];
                    H[4][1]=v64[i];
                    H[4][2]=v65[i];
                    H[4][3]=v66[i];
                    H[4][4]=v67[i];
                    }
                for (pp=0;pp<5;pp++){/*Inversa do produto da matriz transposta pela matriz*/
                    if (pp==0){
                    H[0][5]=1;
                    H[1][5]=H[2][5]=H[3][5]=H[4][5]=0;
                    }
                    if (pp==1){
                    H[0][5]=0;
                    H[1][5]=1;
                    H[2][5]=H[3][5]=H[4][5]=0;
                    }
                    if (pp==2){
                    H[0][5]=H[1][5]=0;
                    H[2][5]=1;
                    H[3][5]=H[4][5]=0;
                    }
                    if (pp==3){
                    H[0][5]=H[1][5]=H[2][5]=0;
                    H[3][5]=1;
                    H[4][5]=0;
                    }
                    if (pp==4){
                    H[0][5]=H[1][5]=H[2][5]=H[3][5]=0;
                    H[4][5]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    pivo[4]=H[4][0]/H[0][0];
                    for (ii=1;ii<5;ii++){
                        for (jj=0;jj<6;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[5]=Ia[2][1]/Ia[1][1];
                    pivo[6]=Ia[3][1]/Ia[1][1];
                    pivo[7]=Ia[4][1]/Ia[1][1];
                    for (ii=2;ii<5;ii++){
                        for (jj=1;jj<6;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+3]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[8]=Ib[3][2]/Ib[2][2];
                    pivo[9]=Ib[4][2]/Ib[2][2];
                    for (ii=3;ii<5;ii++){
                        for (jj=2;jj<6;jj++){
                        Ic[ii][jj]=(-1*pivo[ii+5]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    pivo[10]=Ic[4][3]/Ic[3][3];
                    for (ii=4;ii<5;ii++){
                        for (jj=3;jj<6;jj++){
                        Id[ii][jj]=(-1*pivo[ii+6]*Ic[3][jj])+Ic[ii][jj];
                        }
                        }
                    I[4][pp]=Id[4][5]/Id[4][4];
                    I[3][pp]=(Ic[3][5]-I[4][pp]*Ic[3][4])/Ic[3][3];
                    I[2][pp]=(Ib[2][5]-I[4][pp]*Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][5]-I[4][pp]*Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][5]-I[4][pp]*H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];                    
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F6/100)/((-1)*F6/100); /*Cumulato*/
                    incj=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    inck=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F6/100;
                    incl=sqrt(incj*incj+inck*inck);
                    INCH[i]=sqrt(incl*incl+incw*incw/10000)*cum[i]/100;
                    v68[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v68a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCM[i]=incm+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v69[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v69a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v70[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v70a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCO[i]=inco+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    v71[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v71a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCP[i]=incp+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000;
                    v72[i]=J[4][0]+(mine5[i]*INC[i]*INC[i]*cum[i]/10000);
                    v72a[i]=J[14][14]+(mine5[i]*cum[i]/10000);
                    INCQ[i]=incq+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000;
                    J[0][0]=v68[i];
                    J[10][10]=v68a[i];
                    incm=INCM[i];
                    J[1][0]=v69[i];
                    J[11][11]=v69a[i];
                    incn=INCN[i];
                    J[2][0]=v70[i];
                    J[12][12]=v70a[i];
                    inco=INCO[i];
                    J[3][0]=v71[i];
                    J[13][13]=v71a[i];
                    incp=INCP[i];
                    J[4][0]=v72[i];
                    J[14][14]=v72a[i];
                    incq=INCQ[i];
                    }
                    F7=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]+I[0][4]*J[4][0]);/*Fração cristalizada*/
                    incr=sqrt(incm)*J[10][10];
                    incs=sqrt(incn)*J[11][11];
                    inct=sqrt(inco)*J[12][12];
                    incu=sqrt(incp)*J[13][13];
                    incv=sqrt(incq)*J[14][14];
                    incx=sqrt(incr*incr+incs*incs+inct*inct+incu*incu+incv*incv);
                    F8=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]+I[1][4]*J[4][0]);
                    F9=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]+I[2][4]*J[4][0]);
                    F10=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]+I[3][4]*J[4][0]);
                    F11=(I[4][0]*J[0][0]+I[4][1]*J[1][0]+I[4][2]*J[2][0]+I[4][3]*J[3][0]+I[4][4]*J[4][0]);
                    ML=(1-F7-F8-F9-F10-F11)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]); /*Multiplicador de Lagrange*/
                    incz=sqrt(incx*incx*5)*ML;
                    F12=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4])+F7)*100; /*Fração Mineral 1*/
                    incy=sqrt(incx*incx+incz*incz)*F12; /*incerteza do mineral 1*/
                    F13=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4])+F8)*100; /*Fração Mineral 2*/
                    incaa=sqrt(incx*incx+incz*incz)*F13; /*incerteza do mineral 2*/
                    F14=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4])+F9)*100; /*Fração Mineral 3*/
                    incbb=sqrt(incx*incx+incz*incz)*F14; /*incerteza do mineral 3*/
                    F15=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4])+F10)*100; /*Fração Mineral 4*/
                    inccc=sqrt(incx*incx+incz*incz)*F15; /*incerteza do mineral 4*/
                    F16=(ML*(I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4])+F11)*100; /*Fração Mineral 5*/
                    incdd=sqrt(incx*incx+incz*incz)*F16; /*incerteza do mineral 5*/
                    }
                if (F6<0 & F6>-100 & F12>0 & F13>0 & F14>0 & F15>0 & F16>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F12*F6)/10000+(B[i][j*nnn+l+m]*F13*F6)/10000+(B[i][j*nnn+l+m+q]*F14*F6)/10000+(B[i][j*nnn+l+m+q+v]*F15*F6)/10000+(B[i][j*nnn+l+m+q+v+vv]*F16*F6)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F6);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                      
                if (Errorel>=t & Errorel<=u){   /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){  
                   Dg=(F12*BAS[ii][l]+F13*BAS[ii][l+m]+F14*BAS[ii][l+m+q]+F15*BAS[ii][l+m+q+v]+F16*BAS[ii][l+m+q+v+vv])/100;
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F6/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+j*nnn+m;
                   ww=l+j*nnn+m+q;
                   www=l+j*nnn+m+q+v;
                   wwww=l+j*nnn+m+q+v+vv;
                   if (Errorel>=t & Errorel<=u){
                        fprintf(arq_saida, "Evolução: ");
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+j*nnn]);
                        fprintf(arq_saida, " (%.2f", F12);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incy);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F13);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incaa);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F14);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incbb);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F15);
                        fprintf(arq_saida, " +/- %.2f)%% e ", inccc);
                        fprintf(arq_saida, str_mine[wwww]);
                        fprintf(arq_saida, " (%.2f", F16);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incdd);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F6);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){   /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        } 
                }
                }
                }
                }
                }
                }
                }
                }
                }
                
    /*CÁLCULO PARA FRACIONAMENTO DE SEIS MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE SEIS MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<nnn-5;l++){
        p++;
        r=-1;
        for(m=1;m<(nnn-4-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(nnn-4-r);q++){
            rr++;
            rrr=-1;
            for(v=1;v<(nnn-4-rr);v++){
              rrr++;
              rrrr=-1;
              for(vv=1;vv<(nnn-4-rrr);vv++){
                rrrr++;
                for(vvv=1;vvv<(nnn-4-rrrr);vvv++){
              /*seleção para diminuir tempo de cálculo*/
                 if (l==0&l+m+q+v+vv+vvv<=nnn || l==1&l+m+q+v+vv+vvv<=nnn-1 || l==2&l+m+q+v+vv+vvv<=nnn-2 || l==3&l+m+q+v+vv+vvv<=nnn-3){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[0][5]=C[0][6]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[1][5]=C[1][6]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[2][5]=C[2][6]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[3][5]=C[3][6]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=C[4][5]=C[4][6]=C[5][0]=C[5][1]=C[5][2]=C[5][3]=C[5][4]=C[5][5]=C[5][6]=C[6][0]=C[6][1]=C[6][2]=C[6][3]=C[6][4]=C[6][5]=C[6][6]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=E[5][0]=E[6][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=E[15][15]=E[16][16]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[0][4]=H[0][5]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[1][4]=H[1][5]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[2][4]=H[2][5]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=H[3][4]=H[3][5]=H[4][0]=H[4][1]=H[4][2]=H[4][3]=H[4][4]=H[4][5]=H[5][0]=H[5][1]=H[5][2]=H[5][3]=H[5][4]=H[5][5]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=J[4][0]=J[5][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=J[14][14]=J[15][15]=0;
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                   
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][j*nnn+l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][j*nnn+l+m+q+v];/*Vetor fase mineral*/
                    mine5[i]=B[i][j*nnn+l+m+q+v+vv];/*Vetor fase mineral*/
                    mine6[i]=B[i][j*nnn+l+m+q+v+vv+vvv];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v6[i]=C[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v7[i]=C[0][6]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v8[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v9[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v10[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v11[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v12[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v13[i]=C[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v14[i]=C[1][6]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v15[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v16[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v17[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v18[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v19[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v20[i]=C[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v21[i]=C[2][6]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v22[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v23[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v24[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v25[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v26[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v27[i]=C[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v28[i]=C[3][6]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v29[i]=C[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v30[i]=C[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v31[i]=C[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v32[i]=C[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v33[i]=C[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v34[i]=C[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v35[i]=C[4][6]+(mine5[i]*INC[i]*INC[i]*liq[i]/10000);
                    v36[i]=C[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v37[i]=C[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v38[i]=C[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v39[i]=C[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v40[i]=C[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v41[i]=C[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v42[i]=C[5][6]+(mine6[i]*INC[i]*INC[i]*liq[i]/10000);
                    v43[i]=C[6][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v44[i]=C[6][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v45[i]=C[6][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v46[i]=C[6][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v47[i]=C[6][4]+(liq[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v48[i]=C[6][5]+(liq[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v49[i]=C[6][6]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[0][5]=v6[i];
                    C[0][6]=v7[i];
                    C[1][0]=v8[i];
                    C[1][1]=v9[i];
                    C[1][2]=v10[i];
                    C[1][3]=v11[i];
                    C[1][4]=v12[i];
                    C[1][5]=v13[i];
                    C[1][6]=v14[i];
                    C[2][0]=v15[i];
                    C[2][1]=v16[i];
                    C[2][2]=v17[i];
                    C[2][3]=v18[i];
                    C[2][4]=v19[i];
                    C[2][5]=v20[i];
                    C[2][6]=v21[i];
                    C[3][0]=v22[i];
                    C[3][1]=v23[i];
                    C[3][2]=v24[i];
                    C[3][3]=v25[i];
                    C[3][4]=v26[i];
                    C[3][5]=v27[i];
                    C[3][6]=v28[i];
                    C[4][0]=v29[i];
                    C[4][1]=v30[i];
                    C[4][2]=v31[i];
                    C[4][3]=v32[i];
                    C[4][4]=v33[i];
                    C[4][5]=v34[i];
                    C[4][6]=v35[i];
                    C[5][0]=v36[i];
                    C[5][1]=v37[i];
                    C[5][2]=v38[i];
                    C[5][3]=v39[i];
                    C[5][4]=v40[i];
                    C[5][5]=v41[i];
                    C[5][6]=v42[i];
                    C[6][0]=v43[i];
                    C[6][1]=v44[i];
                    C[6][2]=v45[i];
                    C[6][3]=v46[i];
                    C[6][4]=v47[i];
                    C[6][5]=v48[i];
                    C[6][6]=v49[i];
                    }
                for (zz=0;zz<7;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][7]=1;
                    C[1][7]=C[2][7]=C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==1){
                    C[0][7]=0;
                    C[1][7]=1;
                    C[2][7]=C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==2){
                    C[0][7]=C[1][7]=0;
                    C[2][7]=1;
                    C[3][7]=C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==3){
                    C[0][7]=C[1][7]=C[2][7]=0;
                    C[3][7]=1;
                    C[4][7]=C[5][7]=C[6][7]=0;
                    }
                    if (zz==4){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=0;
                    C[4][7]=1;
                    C[5][7]=C[6][7]=0;
                    }
                    if (zz==5){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=C[4][7]=0;
                    C[5][7]=1;
                    C[6][7]=0;
                    }
                    if (zz==6){
                    C[0][7]=C[1][7]=C[2][7]=C[3][7]=C[4][7]=C[5][7]=0;
                    C[6][7]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    pivo[5]=C[5][0]/C[0][0];
                    pivo[6]=C[6][0]/C[0][0];
                    for (ii=1;ii<7;ii++){
                        for (jj=0;jj<8;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[7]=Da[2][1]/Da[1][1];
                    pivo[8]=Da[3][1]/Da[1][1];
                    pivo[9]=Da[4][1]/Da[1][1];
                    pivo[10]=Da[5][1]/Da[1][1];
                    pivo[11]=Da[6][1]/Da[1][1];
                    for (ii=2;ii<7;ii++){
                        for (jj=1;jj<8;jj++){
                        Db[ii][jj]=(-1*pivo[ii+5]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[12]=Db[3][2]/Db[2][2];
                    pivo[13]=Db[4][2]/Db[2][2];
                    pivo[14]=Db[5][2]/Db[2][2];
                    pivo[15]=Db[6][2]/Db[2][2];
                    for (ii=3;ii<7;ii++){
                        for (jj=2;jj<8;jj++){
                        Dc[ii][jj]=(-1*pivo[ii+9]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[16]=Dc[4][3]/Dc[3][3];
                    pivo[17]=Dc[5][3]/Dc[3][3];
                    pivo[18]=Dc[6][3]/Dc[3][3];
                    for (ii=4;ii<7;ii++){
                        for (jj=3;jj<8;jj++){
                        Dd[ii][jj]=(-1*pivo[ii+12]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    pivo[19]=Dd[5][4]/Dd[4][4];
                    pivo[20]=Dd[6][4]/Dd[4][4];
                    for (ii=5;ii<7;ii++){
                        for (jj=4;jj<8;jj++){
                        De[ii][jj]=(-1*pivo[ii+14]*Dd[4][jj])+Dd[ii][jj];
                        }
                        }
                    pivo[21]=De[6][5]/De[5][5];
                    for (ii=6;ii<7;ii++){
                        for (jj=5;jj<8;jj++){
                        Df[ii][jj]=(-1*pivo[ii+15]*De[5][jj])+De[ii][jj];
                        }
                        }
                    D[6][zz]=Df[6][7]/Df[6][6];    
                    D[5][zz]=(De[5][7]-D[6][zz]*De[5][6])/De[5][5];
                    D[4][zz]=(Dd[4][7]-D[6][zz]*Dd[4][6]-D[5][zz]*Dd[4][5])/Dd[4][4];
                    D[3][zz]=(Dc[3][7]-D[6][zz]*Dc[3][6]-D[5][zz]*Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][7]-D[6][zz]*Db[2][6]-D[5][zz]*Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][7]-D[6][zz]*Da[1][6]-D[5][zz]*Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][7]-D[6][zz]*C[0][6]-D[5][zz]*C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                    
                    }
                    incb=incc=incd=incf=incg=inci=incj=incn=inco=incp=incq=incaa=incbb=0;
                    for(i=0;i<10;i++){
                    v50[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v50a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v51[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v51a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v52[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v52a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v53[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v53a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000;
                    v54[i]=E[4][0]+(mine5[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v54a[i]=E[14][14]+(mine5[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000;
                    v55[i]=E[5][0]+(mine6[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v55a[i]=E[15][15]+(mine6[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000;
                    v56[i]=E[6][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v56a[i]=E[16][16]+(liq[i]*solliq[i]/10000);
                    INCJ[i]=incj+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v50[i];
                    E[10][10]=v50a[i];
                    incb=INCB[i];
                    E[1][0]=v51[i];
                    E[11][11]=v51a[i];
                    incc=INCC[i];
                    E[2][0]=v52[i];
                    E[12][12]=v52a[i];
                    incd=INCD[i];
                    E[3][0]=v53[i];
                    E[13][13]=v53a[i];
                    incf=INCF[i];
                    E[4][0]=v54[i];
                    E[14][14]=v54a[i];
                    incg=INCG[i];
                    E[5][0]=v55[i];
                    E[15][15]=v55a[i];
                    inci=INCI[i];
                    E[6][0]=v56[i];
                    E[16][16]=v56a[i];
                    incj=INCJ[i];
                    }
                    F7=(D[6][0]*E[0][0]+D[6][1]*E[1][0]+D[6][2]*E[2][0]+D[6][3]*E[3][0]+D[6][4]*E[4][0]+D[6][5]*E[5][0]+D[6][6]*E[6][0])*100;/*Fração subtraída do magma inicial*/                
                    incr=sqrt(incb)*D[6][0]*E[10][10];
                    incs=sqrt(incc)*D[6][1]*E[11][11];
                    inct=sqrt(incd)*D[6][2]*E[12][12];
                    incu=sqrt(incf)*D[6][3]*E[13][13];
                    incv=sqrt(incg)*D[6][4]*E[14][14];
                    incx=sqrt(inci)*D[6][5]*E[15][15];
                    incz=sqrt(incj)*D[6][6]*E[16][16];
                    incw=sqrt(incr*incr+incs*incs+inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/               
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F7<0 & F7>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v57[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v58[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v59[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v60[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v61[i]=H[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v62[i]=H[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v63[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v64[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v65[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v66[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v67[i]=H[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v68[i]=H[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v69[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v70[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v71[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v72[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v73[i]=H[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v74[i]=H[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v75[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v76[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v77[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v78[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v79[i]=H[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v80[i]=H[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v81[i]=H[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v82[i]=H[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v83[i]=H[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v84[i]=H[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v85[i]=H[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v86[i]=H[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v87[i]=H[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v88[i]=H[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v89[i]=H[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v90[i]=H[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v91[i]=H[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v92[i]=H[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    H[0][0]=v57[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v58[i];
                    H[0][2]=v59[i];
                    H[0][3]=v60[i];
                    H[0][4]=v61[i];
                    H[0][5]=v62[i];
                    H[1][0]=v63[i];
                    H[1][1]=v64[i];
                    H[1][2]=v65[i];
                    H[1][3]=v66[i];
                    H[1][4]=v67[i];
                    H[1][5]=v68[i];
                    H[2][0]=v69[i];
                    H[2][1]=v70[i];
                    H[2][2]=v71[i];
                    H[2][3]=v72[i];
                    H[2][4]=v73[i];
                    H[2][5]=v74[i];
                    H[3][0]=v75[i];
                    H[3][1]=v76[i];
                    H[3][2]=v77[i];
                    H[3][3]=v78[i];
                    H[3][4]=v79[i];
                    H[3][5]=v80[i];
                    H[4][0]=v81[i];
                    H[4][1]=v82[i];
                    H[4][2]=v83[i];
                    H[4][3]=v84[i];
                    H[4][4]=v85[i];
                    H[4][5]=v86[i];
                    H[5][0]=v87[i];
                    H[5][1]=v88[i];
                    H[5][2]=v89[i];
                    H[5][3]=v90[i];
                    H[5][4]=v91[i];
                    H[5][5]=v92[i];
                    }
                for (pp=0;pp<6;pp++){
                    if (pp==0){/*Inversa do produto da matriz transposta pela matriz*/
                    H[0][6]=1;
                    H[1][6]=H[2][6]=H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==1){
                    H[0][6]=0;
                    H[1][6]=1;
                    H[2][6]=H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==2){
                    H[0][6]=H[1][6]=0;
                    H[2][6]=1;
                    H[3][6]=H[4][6]=H[5][6]=0;
                    }
                    if (pp==3){
                    H[0][6]=H[1][6]=H[2][6]=0;
                    H[3][6]=1;
                    H[4][6]=H[5][6]=0;
                    }
                    if (pp==4){
                    H[0][6]=H[1][6]=H[2][6]=H[3][6]=0;
                    H[4][6]=1;
                    H[5][6]=0;
                    }
                    if (pp==5){
                    H[0][6]=H[1][6]=H[2][6]=H[3][6]=H[4][6]=0;
                    H[5][6]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    pivo[4]=H[4][0]/H[0][0];
                    pivo[5]=H[5][0]/H[0][0];
                    for (ii=1;ii<6;ii++){
                        for (jj=0;jj<7;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[6]=Ia[2][1]/Ia[1][1];
                    pivo[7]=Ia[3][1]/Ia[1][1];
                    pivo[8]=Ia[4][1]/Ia[1][1];
                    pivo[9]=Ia[5][1]/Ia[1][1];
                    for (ii=2;ii<6;ii++){
                        for (jj=1;jj<7;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+4]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[10]=Ib[3][2]/Ib[2][2];
                    pivo[11]=Ib[4][2]/Ib[2][2];
                    pivo[12]=Ib[5][2]/Ib[2][2];
                    for (ii=3;ii<6;ii++){
                        for (jj=2;jj<7;jj++){
                        Ic[ii][jj]=(-1*pivo[ii+7]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    pivo[13]=Ic[4][3]/Ic[3][3];
                    pivo[14]=Ic[5][3]/Ic[3][3];
                    for (ii=4;ii<6;ii++){
                        for (jj=3;jj<7;jj++){
                        Id[ii][jj]=(-1*pivo[ii+9]*Ic[3][jj])+Ic[ii][jj];
                        }
                        }
                    pivo[15]=Id[5][4]/Id[4][4];
                    for (ii=5;ii<6;ii++){
                        for (jj=4;jj<7;jj++){
                        Ie[ii][jj]=(-1*pivo[ii+10]*Id[4][jj])+Id[ii][jj];
                        }
                        }
                    I[5][pp]=Ie[5][6]/Ie[5][5];
                    I[4][pp]=(Id[4][6]-I[5][pp]*Id[4][5])/Id[4][4];
                    I[3][pp]=(Ic[3][6]-I[5][pp]*Ic[3][5]-I[4][pp]*Ic[3][4])/Ic[3][3];
                    I[2][pp]=(Ib[2][6]-I[5][pp]*Ib[2][5]-I[4][pp]*Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][6]-I[5][pp]*Ia[1][5]-I[4][pp]*Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][6]-I[5][pp]*H[0][5]-I[4][pp]*H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];                    
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F7/100)/((-1)*F7/100); 
                    inck=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    incl=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F7/100;
                    incm=sqrt(inck*inck+incl*incl);
                    INCH[i]=sqrt(incm*incm+incw*incw/10000)*cum[i]/100;
                    v93[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v93a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v94[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v94a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCO[i]=inco+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v95[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v95a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCP[i]=incp+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    v96[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v96a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCQ[i]=incq+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000;
                    v97[i]=J[4][0]+(mine5[i]*INC[i]*INC[i]*cum[i]/10000);
                    v97a[i]=J[14][14]+(mine5[i]*cum[i]/10000);
                    INCAA[i]=incaa+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000;
                    v98[i]=J[5][0]+(mine6[i]*INC[i]*INC[i]*cum[i]/10000);
                    v98a[i]=J[15][15]+(mine6[i]*cum[i]/10000);
                    INCBB[i]=incbb+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000;
                    J[0][0]=v93[i];
                    J[10][10]=v93a[i];
                    incn=INCN[i];
                    J[1][0]=v94[i];
                    J[11][11]=v94a[i];
                    inco=INCO[i];
                    J[2][0]=v95[i];
                    J[12][12]=v95a[i];
                    incp=INCP[i];
                    J[3][0]=v96[i];
                    J[13][13]=v96a[i];
                    incq=INCQ[i];
                    J[4][0]=v97[i];
                    J[14][14]=v97a[i];
                    incaa=INCAA[i];
                    J[5][0]=v98[i];
                    J[15][15]=v98a[i];
                    incbb=INCBB[i];
                    }
                    F8=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]+I[0][4]*J[4][0]+I[0][5]*J[5][0]);/*Fração cristalizada*/
                    inccc=sqrt(incn)*J[10][10];
                    incdd=sqrt(inco)*J[11][11];
                    incee=sqrt(incp)*J[12][12];
                    incff=sqrt(incq)*J[13][13];
                    incgg=sqrt(incaa)*J[14][14];
                    inchh=sqrt(incbb)*J[15][15];
                    incii=sqrt(inccc*inccc+incdd*incdd+incee*incee+incff*incff+incgg*incgg+inchh*inchh);
                    F9=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]+I[1][4]*J[4][0]+I[1][5]*J[5][0]);
                    F10=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]+I[2][4]*J[4][0]+I[2][5]*J[5][0]);
                    F11=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]+I[3][4]*J[4][0]+I[3][5]*J[5][0]);
                    F12=(I[4][0]*J[0][0]+I[4][1]*J[1][0]+I[4][2]*J[2][0]+I[4][3]*J[3][0]+I[4][4]*J[4][0]+I[4][5]*J[5][0]);
                    F13=(I[5][0]*J[0][0]+I[5][1]*J[1][0]+I[5][2]*J[2][0]+I[5][3]*J[3][0]+I[5][4]*J[4][0]+I[5][5]*J[5][0]);
                    ML=(1-F8-F9-F10-F11-F12-F13)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5]+I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5]+I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5]+I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5]); /*Multiplicador de Lagrange*/
                    incjj=sqrt(incii*incii*6)*ML;
                    F14=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5])+F8)*100; /*Fração Mineral 1*/
                    inckk=sqrt(incii*incii+incjj*incjj)*F14; /*incerteza do mineral 1*/
                    F15=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5])+F9)*100; /*Fração Mineral 2*/
                    incll=sqrt(incii*incii+incjj*incjj)*F15; /*incerteza do mineral 2*/
                    F16=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5])+F10)*100; /*Fração Mineral 3*/
                    incmm=sqrt(incii*incii+incjj*incjj)*F16; /*incerteza do mineral 3*/
                    F17=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5])+F11)*100; /*Fração Mineral 4*/
                    incnn=sqrt(incii*incii+incjj*incjj)*F17; /*incerteza do mineral 4*/
                    F18=(ML*(I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5])+F12)*100; /*Fração Mineral 5*/
                    incoo=sqrt(incii*incii+incjj*incjj)*F18; /*incerteza do mineral 5*/
                    F19=(ML*(I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5])+F13)*100; /*Fração Mineral 6*/
                    incpp=sqrt(incii*incii+incjj*incjj)*F19; /*incerteza do mineral 6*/
                    }
                if (F7<0 & F7>-100 & F14>0 & F15>0 & F16>0 & F17>0 & F18>0 & F19>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F14*F7)/10000+(B[i][j*nnn+l+m]*F15*F7)/10000+(B[i][j*nnn+l+m+q]*F16*F7)/10000+(B[i][j*nnn+l+m+q+v]*F17*F7)/10000+(B[i][j*nnn+l+m+q+v+vv]*F18*F7)/10000+(B[i][j*nnn+l+m+q+v+vv+vvv]*F19*F7)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F7);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                        
                if (Errorel>=t & Errorel<=u){   /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ 
                   Dg=(F14*BAS[ii][l]+F15*BAS[ii][l+m]+F16*BAS[ii][l+m+q]+F17*BAS[ii][l+m+q+v]+F18*BAS[ii][l+m+q+v+vv]+F19*BAS[ii][l+m+q+v+vv+vvv])/100;
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F7/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+j*nnn+m;
                   ww=l+j*nnn+m+q;
                   www=l+j*nnn+m+q+v;
                   wwww=l+j*nnn+m+q+v+vv;
                   wwwww=l+j*nnn+m+q+v+vv+vvv;
                   if (Errorel>=t & Errorel<=u){
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+j*nnn]);
                        fprintf(arq_saida, " (%.2f", F14);
                        fprintf(arq_saida, " +/- %.2f)%% , ", inckk);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F15);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incll);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F16);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incmm);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F17);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incnn);
                        fprintf(arq_saida, str_mine[wwww]);
                        fprintf(arq_saida, " (%.2f", F18);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incoo);
                        fprintf(arq_saida, str_mine[wwwww]);
                        fprintf(arq_saida, " (%.2f", F19);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incpp);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F7);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){    /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                
                    /*CÁLCULO PARA FRACIONAMENTO DE SETE MINERAIS*/
    x=-1;
    fprintf(arq_saida, "                              FRACIONAMENTO DE SETE MINERAIS:\n\n");
    for(j=0;j<n;j++){
      x++;
      p=-1;
      for(l=0;l<nnn-6;l++){
        p++;
        r=-1;
        for(m=1;m<(nnn-5-p);m++){
          r++;
          rr=-1;
          for(q=1;q<(nnn-5-r);q++){
            rr++;
            rrr=-1;
            for(v=1;v<(nnn-5-rr);v++){
              rrr++;
              rrrr=-1;
              for(vv=1;vv<(nnn-5-rrr);vv++){
                rrrr++;
                rrrrr=-1;
                for(vvv=1;vvv<(nnn-5-rrrr);vvv++){
                rrrrr++;
                  for(vvvv=1;vvvv<(nnn-5-rrrrr);vvvv++){        
              /*seleção para diminuir tempo de cálculo*/
                 if (l==0&l+m+q+v+vv+vvv+vvvv<=nnn || l==1&l+m+q+v+vv+vvv+vvvv<=nnn){                    
              for(k=1;k<(n-x);k++){
                    C[0][0]=C[0][1]=C[0][2]=C[0][3]=C[0][4]=C[0][5]=C[0][6]=C[0][7]=C[1][0]=C[1][1]=C[1][2]=C[1][3]=C[1][4]=C[1][5]=C[1][6]=C[1][7]=C[2][0]=C[2][1]=C[2][2]=C[2][3]=C[2][4]=C[2][5]=C[2][6]=C[2][7]=C[3][0]=C[3][1]=C[3][2]=C[3][3]=C[3][4]=C[3][5]=C[3][6]=C[3][7]=C[4][0]=C[4][1]=C[4][2]=C[4][3]=C[4][4]=C[4][5]=C[4][6]=C[4][7]=C[5][0]=C[5][1]=C[5][2]=C[5][3]=C[5][4]=C[5][5]=C[5][6]=C[5][7]=C[6][0]=C[6][1]=C[6][2]=C[6][3]=C[6][4]=C[6][5]=C[6][6]=C[6][7]=C[7][0]=C[7][1]=C[7][2]=C[7][3]=C[7][4]=C[7][5]=C[7][6]=C[7][7]=0;
                    E[0][0]=E[1][0]=E[2][0]=E[3][0]=E[4][0]=E[5][0]=E[6][0]=E[7][0]=0;
                    E[10][10]=E[11][11]=E[12][12]=E[13][13]=E[14][14]=E[15][15]=E[16][16]=E[17][17]=0;
                    H[0][0]=H[0][1]=H[0][2]=H[0][3]=H[0][4]=H[0][5]=H[0][6]=H[1][0]=H[1][1]=H[1][2]=H[1][3]=H[1][4]=H[1][5]=H[1][6]=H[2][0]=H[2][1]=H[2][2]=H[2][3]=H[2][4]=H[2][5]=H[2][6]=H[3][0]=H[3][1]=H[3][2]=H[3][3]=H[3][4]=H[3][5]=H[3][6]=H[4][0]=H[4][1]=H[4][2]=H[4][3]=H[4][4]=H[4][5]=H[4][6]=H[5][0]=H[5][1]=H[5][2]=H[5][3]=H[5][4]=H[5][5]=H[5][6]=H[6][0]=H[6][1]=H[6][2]=H[6][3]=H[6][4]=H[6][5]=H[6][6]=0;
                    J[0][0]=J[1][0]=J[2][0]=J[3][0]=J[4][0]=J[5][0]=J[6][0]=0;
                    J[10][10]=J[11][11]=J[12][12]=J[13][13]=J[14][14]=J[15][15]=J[16][16]=0;
              for(i=0;i<10;i++){                                                      
                    INCER[i]=(1/INC[i])/100; /*incertezas dos óxidos*/                                                   
                    solliq[i]=G[i+1][j+1]-G[i+1][j+1+k];/*Vetor subtração sólido-líquido*/
                    INCA[i]=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    mine1[i]=B[i][j*nnn+l];/*Vetor fase mineral*/
                    mine2[i]=B[i][j*nnn+l+m];/*Vetor fase mineral*/
                    mine3[i]=B[i][j*nnn+l+m+q];/*Vetor fase mineral*/
                    mine4[i]=B[i][j*nnn+l+m+q+v];/*Vetor fase mineral*/
                    mine5[i]=B[i][j*nnn+l+m+q+v+vv];/*Vetor fase mineral*/
                    mine6[i]=B[i][j*nnn+l+m+q+v+vv+vvv];/*Vetor fase mineral*/
                    mine7[i]=B[i][j*nnn+l+m+q+v+vv+vvv+vvvv];/*Vetor fase mineral*/
                    liq[i]=G[i+1][j+1+k];/*Vetor Líquido*/
                    INCE[i]=liq[i]*INCER[i];
                    v1[i]=C[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);/*Produto da matriz transposta pela matriz*/
                    v2[i]=C[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v3[i]=C[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v4[i]=C[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v5[i]=C[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v6[i]=C[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v7[i]=C[0][6]+(mine1[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v8[i]=C[0][7]+(mine1[i]*INC[i]*INC[i]*liq[i]/10000);
                    v9[i]=C[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v10[i]=C[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v11[i]=C[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v12[i]=C[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v13[i]=C[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v14[i]=C[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v15[i]=C[1][6]+(mine2[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v16[i]=C[1][7]+(mine2[i]*INC[i]*INC[i]*liq[i]/10000);
                    v17[i]=C[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v18[i]=C[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v19[i]=C[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v20[i]=C[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v21[i]=C[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v22[i]=C[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v23[i]=C[2][6]+(mine3[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v24[i]=C[2][7]+(mine3[i]*INC[i]*INC[i]*liq[i]/10000);
                    v25[i]=C[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v26[i]=C[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v27[i]=C[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v28[i]=C[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v29[i]=C[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v30[i]=C[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v31[i]=C[3][6]+(mine4[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v32[i]=C[3][7]+(mine4[i]*INC[i]*INC[i]*liq[i]/10000);
                    v33[i]=C[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v34[i]=C[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v35[i]=C[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v36[i]=C[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v37[i]=C[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v38[i]=C[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v39[i]=C[4][6]+(mine5[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v40[i]=C[4][7]+(mine5[i]*INC[i]*INC[i]*liq[i]/10000);
                    v41[i]=C[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v42[i]=C[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v43[i]=C[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v44[i]=C[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v45[i]=C[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v46[i]=C[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v47[i]=C[5][6]+(mine6[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v48[i]=C[5][7]+(mine6[i]*INC[i]*INC[i]*liq[i]/10000);
                    v49[i]=C[6][0]+(mine7[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v50[i]=C[6][1]+(mine7[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v51[i]=C[6][2]+(mine7[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v52[i]=C[6][3]+(mine7[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v53[i]=C[6][4]+(mine7[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v54[i]=C[6][5]+(mine7[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v55[i]=C[6][6]+(mine7[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v56[i]=C[6][7]+(mine7[i]*INC[i]*INC[i]*liq[i]/10000);
                    v57[i]=C[7][0]+(liq[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v58[i]=C[7][1]+(liq[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v59[i]=C[7][2]+(liq[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v60[i]=C[7][3]+(liq[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v61[i]=C[7][4]+(liq[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v62[i]=C[7][5]+(liq[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v63[i]=C[7][6]+(liq[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v64[i]=C[7][7]+(liq[i]*INC[i]*INC[i]*liq[i]/10000);
                    C[0][0]=v1[i];
                    C[0][1]=v2[i];
                    C[0][2]=v3[i];
                    C[0][3]=v4[i];
                    C[0][4]=v5[i];
                    C[0][5]=v6[i];
                    C[0][6]=v7[i];
                    C[0][7]=v8[i];
                    C[1][0]=v9[i];
                    C[1][1]=v10[i];
                    C[1][2]=v11[i];
                    C[1][3]=v12[i];
                    C[1][4]=v13[i];
                    C[1][5]=v14[i];
                    C[1][6]=v15[i];
                    C[1][7]=v16[i];
                    C[2][0]=v17[i];
                    C[2][1]=v18[i];
                    C[2][2]=v19[i];
                    C[2][3]=v20[i];
                    C[2][4]=v21[i];
                    C[2][5]=v22[i];
                    C[2][6]=v23[i];
                    C[2][7]=v24[i];
                    C[3][0]=v25[i];
                    C[3][1]=v26[i];
                    C[3][2]=v27[i];
                    C[3][3]=v28[i];
                    C[3][4]=v29[i];
                    C[3][5]=v30[i];
                    C[3][6]=v31[i];
                    C[3][7]=v32[i];
                    C[4][0]=v33[i];
                    C[4][1]=v34[i];
                    C[4][2]=v35[i];
                    C[4][3]=v36[i];
                    C[4][4]=v37[i];
                    C[4][5]=v38[i];
                    C[4][6]=v39[i];
                    C[4][7]=v40[i];
                    C[5][0]=v41[i];
                    C[5][1]=v42[i];
                    C[5][2]=v43[i];
                    C[5][3]=v44[i];
                    C[5][4]=v45[i];
                    C[5][5]=v46[i];
                    C[5][6]=v47[i];
                    C[5][7]=v48[i];
                    C[6][0]=v49[i];
                    C[6][1]=v50[i];
                    C[6][2]=v51[i];
                    C[6][3]=v52[i];
                    C[6][4]=v53[i];
                    C[6][5]=v54[i];
                    C[6][6]=v55[i];
                    C[6][7]=v56[i];
                    C[7][0]=v57[i];
                    C[7][1]=v58[i];
                    C[7][2]=v59[i];
                    C[7][3]=v60[i];
                    C[7][4]=v61[i];
                    C[7][5]=v62[i];
                    C[7][6]=v63[i];
                    C[7][7]=v64[i];
                    }
                for (zz=0;zz<8;zz++){
                    if (zz==0){/*Inversa do produto da matriz transposta pela matriz*/
                    C[0][8]=1;
                    C[1][8]=C[2][8]=C[3][8]=C[4][8]=C[5][8]=C[6][8]=C[7][8]=0;
                    }
                    if (zz==1){
                    C[0][8]=0;
                    C[1][8]=1;
                    C[2][8]=C[3][8]=C[4][8]=C[5][8]=C[6][8]=C[7][8]=0;
                    }
                    if (zz==2){
                    C[0][8]=C[1][8]=0;
                    C[2][8]=1;
                    C[3][8]=C[4][8]=C[5][8]=C[6][8]=C[7][8]=0;
                    }
                    if (zz==3){
                    C[0][8]=C[1][8]=C[2][8]=0;
                    C[3][8]=1;
                    C[4][8]=C[5][8]=C[6][8]=C[7][8]=0;
                    }
                    if (zz==4){
                    C[0][8]=C[1][8]=C[2][8]=C[3][8]=0;
                    C[4][8]=1;
                    C[5][8]=C[6][8]=C[7][8]=0;
                    }
                    if (zz==5){
                    C[0][8]=C[1][8]=C[2][8]=C[3][8]=C[4][8]=0;
                    C[5][8]=1;
                    C[6][8]=C[7][8]=0;
                    }
                    if (zz==6){
                    C[0][8]=C[1][8]=C[2][8]=C[3][8]=C[4][8]=C[5][8]=0;
                    C[6][8]=1;
                    C[7][8]=0;
                    }
                    if (zz==7){
                    C[0][8]=C[1][8]=C[2][8]=C[3][8]=C[4][8]=C[5][8]=C[6][8]=0;
                    C[7][8]=1;
                    }
                    pivo[1]=C[1][0]/C[0][0];
                    pivo[2]=C[2][0]/C[0][0];
                    pivo[3]=C[3][0]/C[0][0];
                    pivo[4]=C[4][0]/C[0][0];
                    pivo[5]=C[5][0]/C[0][0];
                    pivo[6]=C[6][0]/C[0][0];
                    pivo[7]=C[7][0]/C[0][0];
                    for (ii=1;ii<8;ii++){
                        for (jj=0;jj<9;jj++){
                        Da[ii][jj]=(-1*pivo[ii]*C[0][jj])+C[ii][jj];
                        }
                        }
                    pivo[8]=Da[2][1]/Da[1][1];
                    pivo[9]=Da[3][1]/Da[1][1];
                    pivo[10]=Da[4][1]/Da[1][1];
                    pivo[11]=Da[5][1]/Da[1][1];
                    pivo[12]=Da[6][1]/Da[1][1];
                    pivo[13]=Da[7][1]/Da[1][1];
                    for (ii=2;ii<8;ii++){
                        for (jj=1;jj<9;jj++){
                        Db[ii][jj]=(-1*pivo[ii+6]*Da[1][jj])+Da[ii][jj];
                        }
                        }
                    pivo[14]=Db[3][2]/Db[2][2];
                    pivo[15]=Db[4][2]/Db[2][2];
                    pivo[16]=Db[5][2]/Db[2][2];
                    pivo[17]=Db[6][2]/Db[2][2];
                    pivo[18]=Db[7][2]/Db[2][2];
                    for (ii=3;ii<8;ii++){
                        for (jj=2;jj<9;jj++){
                        Dc[ii][jj]=(-1*pivo[ii+11]*Db[2][jj])+Db[ii][jj];
                        }
                        }
                    pivo[19]=Dc[4][3]/Dc[3][3];
                    pivo[20]=Dc[5][3]/Dc[3][3];
                    pivo[21]=Dc[6][3]/Dc[3][3];
                    pivo[22]=Dc[7][3]/Dc[3][3];
                    for (ii=4;ii<8;ii++){
                        for (jj=3;jj<9;jj++){
                        Dd[ii][jj]=(-1*pivo[ii+15]*Dc[3][jj])+Dc[ii][jj];
                        }
                        }
                    pivo[23]=Dd[5][4]/Dd[4][4];
                    pivo[24]=Dd[6][4]/Dd[4][4];
                    pivo[25]=Dd[7][4]/Dd[4][4];
                    for (ii=5;ii<8;ii++){
                        for (jj=4;jj<9;jj++){
                        De[ii][jj]=(-1*pivo[ii+18]*Dd[4][jj])+Dd[ii][jj];
                        }
                        }
                    pivo[26]=De[6][5]/De[5][5];
                    pivo[27]=De[7][5]/De[5][5];
                    for (ii=6;ii<8;ii++){
                        for (jj=5;jj<9;jj++){
                        Df[ii][jj]=(-1*pivo[ii+20]*De[5][jj])+De[ii][jj];
                        }
                        }
                    pivo[28]=Df[7][6]/Df[6][6];
                    for (ii=7;ii<8;ii++){
                        for (jj=6;jj<9;jj++){
                        Dh[ii][jj]=(-1*pivo[ii+21]*Df[6][jj])+Df[ii][jj];
                        }
                        }
                    D[7][zz]=Dh[7][8]/Dh[7][7];    
                    D[6][zz]=(Df[6][8]-D[7][zz]*Df[6][7])/Df[6][6];
                    D[5][zz]=(De[5][8]-D[7][zz]*De[5][7]-D[6][zz]*De[5][6])/De[5][5];
                    D[4][zz]=(Dd[4][8]-D[7][zz]*Dd[4][7]-D[6][zz]*Dd[4][6]-D[5][zz]*Dd[4][5])/Dd[4][4];
                    D[3][zz]=(Dc[3][8]-D[7][zz]*Dc[3][7]-D[6][zz]*Dc[3][6]-D[5][zz]*Dc[3][5]-D[4][zz]*Dc[3][4])/Dc[3][3];
                    D[2][zz]=(Db[2][8]-D[7][zz]*Db[2][7]-D[6][zz]*Db[2][6]-D[5][zz]*Db[2][5]-D[4][zz]*Db[2][4]-D[3][zz]*Db[2][3])/Db[2][2];
                    D[1][zz]=(Da[1][8]-D[7][zz]*Da[1][7]-D[6][zz]*Da[1][6]-D[5][zz]*Da[1][5]-D[4][zz]*Da[1][4]-D[3][zz]*Da[1][3]-D[2][zz]*Da[1][2])/Da[1][1];
                    D[0][zz]=(C[0][8]-D[7][zz]*C[0][7]-D[6][zz]*C[0][6]-D[5][zz]*C[0][5]-D[4][zz]*C[0][4]-D[3][zz]*C[0][3]-D[2][zz]*C[0][2]-D[1][zz]*C[0][1])/C[0][0];                                        
                    }
                    incb=incc=incd=incf=incg=inci=incj=incja=incn=inco=incp=incq=incaa=incbb=incbba=0;
                    for(i=0;i<10;i++){
                    v65[i]=E[0][0]+(mine1[i]*INC[i]*INC[i]*solliq[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v65a[i]=E[10][10]+(mine1[i]*solliq[i]/10000);
                    INCB[i]=incb+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine1[i]*solliq[i]/10000;
                    v66[i]=E[1][0]+(mine2[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v66a[i]=E[11][11]+(mine2[i]*solliq[i]/10000);
                    INCC[i]=incc+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine2[i]*solliq[i]/10000;
                    v67[i]=E[2][0]+(mine3[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v67a[i]=E[12][12]+(mine3[i]*solliq[i]/10000);
                    INCD[i]=incd+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine3[i]*solliq[i]/10000;
                    v68[i]=E[3][0]+(mine4[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v68a[i]=E[13][13]+(mine4[i]*solliq[i]/10000);
                    INCF[i]=incf+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine4[i]*solliq[i]/10000;
                    v69[i]=E[4][0]+(mine5[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v69a[i]=E[14][14]+(mine5[i]*solliq[i]/10000);
                    INCG[i]=incg+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine5[i]*solliq[i]/10000;
                    v70[i]=E[5][0]+(mine6[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v70a[i]=E[15][15]+(mine6[i]*solliq[i]/10000);
                    INCI[i]=inci+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine6[i]*solliq[i]/10000;
                    v71[i]=E[6][0]+(mine7[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v71a[i]=E[16][16]+(mine7[i]*solliq[i]/10000);
                    INCJ[i]=incj+sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine7[i]*solliq[i]/10000*sqrt(INCA[i]*INCA[i]+INCMIN[i]*INCMIN[i])*mine7[i]*solliq[i]/10000;
                    v72[i]=E[7][0]+(liq[i]*INC[i]*INC[i]*solliq[i]/10000);
                    v72a[i]=E[17][17]+(liq[i]*solliq[i]/10000);
                    INCJA[i]=incja+sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000*sqrt(INCE[i]*INCE[i]+INCA[i]*INCA[i])*liq[i]*solliq[i]/10000;
                    E[0][0]=v65[i];
                    E[10][10]=v65a[i];
                    incb=INCB[i];
                    E[1][0]=v66[i];
                    E[11][11]=v66a[i];
                    incc=INCC[i];
                    E[2][0]=v67[i];
                    E[12][12]=v67a[i];
                    incd=INCD[i];
                    E[3][0]=v68[i];
                    E[13][13]=v68a[i];
                    incf=INCF[i];
                    E[4][0]=v69[i];
                    E[14][14]=v69a[i];
                    incg=INCG[i];
                    E[5][0]=v70[i];
                    E[15][15]=v70a[i];
                    inci=INCI[i];
                    E[6][0]=v71[i];
                    E[16][16]=v71a[i];
                    incj=INCJ[i];
                    E[7][0]=v72[i];
                    E[17][17]=v72a[i];
                    incja=INCJA[i];
                    }
                    F1=(D[7][0]*E[0][0]+D[7][1]*E[1][0]+D[7][2]*E[2][0]+D[7][3]*E[3][0]+D[7][4]*E[4][0]+D[7][5]*E[5][0]+D[7][6]*E[6][0]+D[7][7]*E[7][0])*100;/*Fração subtraída do magma inicial*/                
                    incqa=sqrt(incb)*D[7][0]*E[10][10];
                    incr=sqrt(incc)*D[7][1]*E[11][11];
                    incs=sqrt(incd)*D[7][2]*E[12][12];
                    inct=sqrt(incf)*D[7][3]*E[13][13];
                    incu=sqrt(incg)*D[7][4]*E[14][14];
                    incv=sqrt(inci)*D[7][5]*E[15][15];
                    incx=sqrt(incj)*D[7][6]*E[16][16];
                    incz=sqrt(incja)*D[7][7]*E[17][17];
                    incw=sqrt(incqa*incqa+incr*incr+incs*incs+inct*inct+incu*incu+incv*incv+incx*incx+incz*incz); /*incerteza da fração subtraída do magma inicial*/               
                /*CÁLCULO DA PORCENTAGEM DE CADA MINERAL FRACIONADO*/
                if (F1<0 & F1>-100){ /*Condição para evitar cálculos desnecessários*/
                    for(i=0;i<10;i++){
                    v73[i]=H[0][0]+(mine1[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v74[i]=H[0][1]+(mine1[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v75[i]=H[0][2]+(mine1[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v76[i]=H[0][3]+(mine1[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v77[i]=H[0][4]+(mine1[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v78[i]=H[0][5]+(mine1[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v79[i]=H[0][6]+(mine1[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v80[i]=H[1][0]+(mine2[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v81[i]=H[1][1]+(mine2[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v82[i]=H[1][2]+(mine2[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v83[i]=H[1][3]+(mine2[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v84[i]=H[1][4]+(mine2[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v85[i]=H[1][5]+(mine2[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v86[i]=H[1][6]+(mine2[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v87[i]=H[2][0]+(mine3[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v88[i]=H[2][1]+(mine3[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v89[i]=H[2][2]+(mine3[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v90[i]=H[2][3]+(mine3[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v91[i]=H[2][4]+(mine3[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v92[i]=H[2][5]+(mine3[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v93[i]=H[2][6]+(mine3[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v94[i]=H[3][0]+(mine4[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v95[i]=H[3][1]+(mine4[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v96[i]=H[3][2]+(mine4[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v97[i]=H[3][3]+(mine4[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v98[i]=H[3][4]+(mine4[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v99[i]=H[3][5]+(mine4[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v100[i]=H[3][6]+(mine4[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v101[i]=H[4][0]+(mine5[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v102[i]=H[4][1]+(mine5[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v103[i]=H[4][2]+(mine5[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v104[i]=H[4][3]+(mine5[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v105[i]=H[4][4]+(mine5[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v106[i]=H[4][5]+(mine5[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v107[i]=H[4][6]+(mine5[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v108[i]=H[5][0]+(mine6[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v109[i]=H[5][1]+(mine6[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v110[i]=H[5][2]+(mine6[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v111[i]=H[5][3]+(mine6[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v112[i]=H[5][4]+(mine6[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v113[i]=H[5][5]+(mine6[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v114[i]=H[5][6]+(mine6[i]*INC[i]*INC[i]*mine7[i]/10000);
                    v115[i]=H[6][0]+(mine7[i]*INC[i]*INC[i]*mine1[i]/10000);
                    v116[i]=H[6][1]+(mine7[i]*INC[i]*INC[i]*mine2[i]/10000);
                    v117[i]=H[6][2]+(mine7[i]*INC[i]*INC[i]*mine3[i]/10000);
                    v118[i]=H[6][3]+(mine7[i]*INC[i]*INC[i]*mine4[i]/10000);
                    v119[i]=H[6][4]+(mine7[i]*INC[i]*INC[i]*mine5[i]/10000);
                    v120[i]=H[6][5]+(mine7[i]*INC[i]*INC[i]*mine6[i]/10000);
                    v121[i]=H[6][6]+(mine7[i]*INC[i]*INC[i]*mine7[i]/10000);
                    H[0][0]=v73[i];/*Produto da matriz transposta pela matriz*/
                    H[0][1]=v74[i];
                    H[0][2]=v75[i];
                    H[0][3]=v76[i];
                    H[0][4]=v77[i];
                    H[0][5]=v78[i];
                    H[0][6]=v79[i];
                    H[1][0]=v80[i];
                    H[1][1]=v81[i];
                    H[1][2]=v82[i];
                    H[1][3]=v83[i];
                    H[1][4]=v84[i];
                    H[1][5]=v85[i];
                    H[1][6]=v86[i];
                    H[2][0]=v87[i];
                    H[2][1]=v88[i];
                    H[2][2]=v89[i];
                    H[2][3]=v90[i];
                    H[2][4]=v91[i];
                    H[2][5]=v92[i];
                    H[2][6]=v93[i];
                    H[3][0]=v94[i];
                    H[3][1]=v95[i];
                    H[3][2]=v96[i];
                    H[3][3]=v97[i];
                    H[3][4]=v98[i];
                    H[3][5]=v99[i];
                    H[3][6]=v100[i];
                    H[4][0]=v101[i];
                    H[4][1]=v102[i];
                    H[4][2]=v103[i];
                    H[4][3]=v104[i];
                    H[4][4]=v105[i];
                    H[4][5]=v106[i];
                    H[4][6]=v107[i];
                    H[5][0]=v108[i];
                    H[5][1]=v109[i];
                    H[5][2]=v110[i];
                    H[5][3]=v111[i];
                    H[5][4]=v112[i];
                    H[5][5]=v113[i];
                    H[5][6]=v114[i];
                    H[6][0]=v115[i];
                    H[6][1]=v116[i];
                    H[6][2]=v117[i];
                    H[6][3]=v118[i];
                    H[6][4]=v119[i];
                    H[6][5]=v120[i];
                    H[6][6]=v121[i];
                    }
                for (pp=0;pp<7;pp++){
                    if (pp==0){/*Inversa do produto da matriz transposta pela matriz*/
                    H[0][7]=1;
                    H[1][7]=H[2][7]=H[3][7]=H[4][7]=H[5][7]=H[6][7]=0;
                    }
                    if (pp==1){
                    H[0][7]=0;
                    H[1][7]=1;
                    H[2][7]=H[3][7]=H[4][7]=H[5][7]=H[6][7]=0;
                    }
                    if (pp==2){
                    H[0][7]=H[1][7]=0;
                    H[2][7]=1;
                    H[3][7]=H[4][7]=H[5][7]=H[6][7]=0;
                    }
                    if (pp==3){
                    H[0][7]=H[1][7]=H[2][7]=0;
                    H[3][7]=1;
                    H[4][7]=H[5][7]=H[6][7]=0;
                    }
                    if (pp==4){
                    H[0][7]=H[1][7]=H[2][7]=H[3][7]=0;
                    H[4][7]=1;
                    H[5][7]=H[6][7]=0;
                    }
                    if (pp==5){
                    H[0][7]=H[1][7]=H[2][7]=H[3][7]=H[4][7]=0;
                    H[5][7]=1;
                    H[6][7]=0;
                    }
                    if (pp==6){
                    H[0][7]=H[1][7]=H[2][7]=H[3][7]=H[4][7]=H[5][7]=0;
                    H[6][7]=1;
                    }
                    pivo[1]=H[1][0]/H[0][0];
                    pivo[2]=H[2][0]/H[0][0];
                    pivo[3]=H[3][0]/H[0][0];
                    pivo[4]=H[4][0]/H[0][0];
                    pivo[5]=H[5][0]/H[0][0];
                    pivo[6]=H[6][0]/H[0][0];
                    for (ii=1;ii<7;ii++){
                        for (jj=0;jj<8;jj++){
                        Ia[ii][jj]=(-1*pivo[ii]*H[0][jj])+H[ii][jj];
                        }
                        }
                    pivo[7]=Ia[2][1]/Ia[1][1];
                    pivo[8]=Ia[3][1]/Ia[1][1];
                    pivo[9]=Ia[4][1]/Ia[1][1];
                    pivo[10]=Ia[5][1]/Ia[1][1];
                    pivo[11]=Ia[6][1]/Ia[1][1];
                    for (ii=2;ii<7;ii++){
                        for (jj=1;jj<8;jj++){
                        Ib[ii][jj]=(-1*pivo[ii+5]*Ia[1][jj])+Ia[ii][jj];
                        }
                        }
                    pivo[12]=Ib[3][2]/Ib[2][2];
                    pivo[13]=Ib[4][2]/Ib[2][2];
                    pivo[14]=Ib[5][2]/Ib[2][2];
                    pivo[15]=Ib[6][2]/Ib[2][2];
                    for (ii=3;ii<7;ii++){
                        for (jj=2;jj<8;jj++){
                        Ic[ii][jj]=(-1*pivo[ii+9]*Ib[2][jj])+Ib[ii][jj];
                        }
                        }
                    pivo[16]=Ic[4][3]/Ic[3][3];
                    pivo[17]=Ic[5][3]/Ic[3][3];
                    pivo[18]=Ic[6][3]/Ic[3][3];
                    for (ii=4;ii<7;ii++){
                        for (jj=3;jj<8;jj++){
                        Id[ii][jj]=(-1*pivo[ii+12]*Ic[3][jj])+Ic[ii][jj];
                        }
                        }
                    pivo[19]=Id[5][4]/Id[4][4];
                    pivo[20]=Id[6][4]/Id[4][4];
                    for (ii=5;ii<7;ii++){
                        for (jj=4;jj<8;jj++){
                        Ie[ii][jj]=(-1*pivo[ii+14]*Id[4][jj])+Id[ii][jj];
                        }
                        }
                    pivo[21]=Ie[6][5]/Ie[5][5];
                    for (ii=6;ii<7;ii++){
                        for (jj=5;jj<8;jj++){
                        If[ii][jj]=(-1*pivo[ii+15]*Ie[5][jj])+Ie[ii][jj];
                        }
                        }
                    I[6][pp]=If[6][7]/If[6][6];
                    I[5][pp]=(Ie[5][7]-I[6][pp]*Ie[5][6])/Ie[5][5];
                    I[4][pp]=(Id[4][7]-I[6][pp]*Id[4][6]-I[5][pp]*Id[4][5])/Id[4][4];
                    I[3][pp]=(Ic[3][7]-I[6][pp]*Ic[3][6]-I[5][pp]*Ic[3][5]-I[4][pp]*Ic[3][4])/Ic[3][3];
                    I[2][pp]=(Ib[2][7]-I[6][pp]*Ib[2][6]-I[5][pp]*Ib[2][5]-I[4][pp]*Ib[2][4]-I[3][pp]*Ib[2][3])/Ib[2][2];
                    I[1][pp]=(Ia[1][7]-I[6][pp]*Ia[1][6]-I[5][pp]*Ia[1][5]-I[4][pp]*Ia[1][4]-I[3][pp]*Ia[1][3]-I[2][pp]*Ia[1][2])/Ia[1][1];
                    I[0][pp]=(H[0][7]-I[6][pp]*H[0][6]-I[5][pp]*H[0][5]-I[4][pp]*H[0][4]-I[3][pp]*H[0][3]-I[2][pp]*H[0][2]-I[1][pp]*H[0][1])/H[0][0];                    
                    }
                    for(i=0;i<10;i++){
                    cum[i]=(G[i+1][j+1]-G[i+1][j+1+k]+G[i+1][j+1+k]*(-1)*F1/100)/((-1)*F1/100); 
                    inck=sqrt(INCER[i]*G[i+1][j+1]*INCER[i]*G[i+1][j+1]/10000+INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000);
                    incl=sqrt(INCER[i]*G[i+1][j+1+k]*INCER[i]*G[i+1][j+1+k]/10000+incw*incw/10000)*G[i+1][j+1+k]*(-1)*F1/100;
                    incm=sqrt(inck*inck+incl*incl);
                    INCH[i]=sqrt(incm*incm+incw*incw/10000)*cum[i]/100;
                    v122[i]=J[0][0]+(mine1[i]*INC[i]*INC[i]*cum[i]/10000);/*Produto da matriz transposta pelo vetor subtração sólido-líquido*/
                    v122a[i]=J[10][10]+(mine1[i]*cum[i]/10000);
                    INCN[i]=incn+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine1[i]*cum[i]/10000;
                    v123[i]=J[1][0]+(mine2[i]*INC[i]*INC[i]*cum[i]/10000);
                    v123a[i]=J[11][11]+(mine2[i]*cum[i]/10000);
                    INCO[i]=inco+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine2[i]*cum[i]/10000;
                    v124[i]=J[2][0]+(mine3[i]*INC[i]*INC[i]*cum[i]/10000);
                    v124a[i]=J[12][12]+(mine3[i]*cum[i]/10000);
                    INCP[i]=incp+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine3[i]*cum[i]/10000;
                    v125[i]=J[3][0]+(mine4[i]*INC[i]*INC[i]*cum[i]/10000);
                    v125a[i]=J[13][13]+(mine4[i]*cum[i]/10000);
                    INCQ[i]=incq+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine4[i]*cum[i]/10000;
                    v126[i]=J[4][0]+(mine5[i]*INC[i]*INC[i]*cum[i]/10000);
                    v126a[i]=J[14][14]+(mine5[i]*cum[i]/10000);
                    INCAA[i]=incaa+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine5[i]*cum[i]/10000;
                    v127[i]=J[5][0]+(mine6[i]*INC[i]*INC[i]*cum[i]/10000);
                    v127a[i]=J[15][15]+(mine6[i]*cum[i]/10000);
                    INCBB[i]=incbb+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine6[i]*cum[i]/10000;
                    v128[i]=J[6][0]+(mine7[i]*INC[i]*INC[i]*cum[i]/10000);
                    v128a[i]=J[16][16]+(mine7[i]*cum[i]/10000);
                    INCBBA[i]=incbba+sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine7[i]*cum[i]/10000*sqrt(INCH[i]*INCH[i]+INCMIN[i]*INCMIN[i])*mine7[i]*cum[i]/10000;
                    J[0][0]=v122[i];
                    J[10][10]=v122a[i];
                    incn=INCN[i];
                    J[1][0]=v123[i];
                    J[11][11]=v123a[i];
                    inco=INCO[i];
                    J[2][0]=v124[i];
                    J[12][12]=v124a[i];
                    incp=INCP[i];
                    J[3][0]=v125[i];
                    J[13][13]=v125a[i];
                    incq=INCQ[i];
                    J[4][0]=v126[i];
                    J[14][14]=v126a[i];
                    incaa=INCAA[i];
                    J[5][0]=v127[i];
                    J[15][15]=v127a[i];
                    incbb=INCBB[i];
                    J[6][0]=v128[i];
                    J[16][16]=v128a[i];
                    incbba=INCBBA[i];
                    }
                    F2=(I[0][0]*J[0][0]+I[0][1]*J[1][0]+I[0][2]*J[2][0]+I[0][3]*J[3][0]+I[0][4]*J[4][0]+I[0][5]*J[5][0]+I[0][6]*J[6][0]);/*Fração cristalizada*/
                    inccc=sqrt(incn)*J[10][10];
                    incdd=sqrt(inco)*J[11][11];
                    incee=sqrt(incp)*J[12][12];
                    incff=sqrt(incq)*J[13][13];
                    incgg=sqrt(incaa)*J[14][14];
                    inchh=sqrt(incbb)*J[15][15];
                    inchha=sqrt(incbba)*J[16][16];
                    incii=sqrt(inccc*inccc+incdd*incdd+incee*incee+incff*incff+incgg*incgg+inchh*inchh+inchha*inchha);
                    F3=(I[1][0]*J[0][0]+I[1][1]*J[1][0]+I[1][2]*J[2][0]+I[1][3]*J[3][0]+I[1][4]*J[4][0]+I[1][5]*J[5][0]+I[1][6]*J[6][0]);
                    F4=(I[2][0]*J[0][0]+I[2][1]*J[1][0]+I[2][2]*J[2][0]+I[2][3]*J[3][0]+I[2][4]*J[4][0]+I[2][5]*J[5][0]+I[2][6]*J[6][0]);
                    F5=(I[3][0]*J[0][0]+I[3][1]*J[1][0]+I[3][2]*J[2][0]+I[3][3]*J[3][0]+I[3][4]*J[4][0]+I[3][5]*J[5][0]+I[3][6]*J[6][0]);
                    F6=(I[4][0]*J[0][0]+I[4][1]*J[1][0]+I[4][2]*J[2][0]+I[4][3]*J[3][0]+I[4][4]*J[4][0]+I[4][5]*J[5][0]+I[4][6]*J[6][0]);
                    F7=(I[5][0]*J[0][0]+I[5][1]*J[1][0]+I[5][2]*J[2][0]+I[5][3]*J[3][0]+I[5][4]*J[4][0]+I[5][5]*J[5][0]+I[5][6]*J[6][0]);
                    F8=(I[6][0]*J[0][0]+I[6][1]*J[1][0]+I[6][2]*J[2][0]+I[6][3]*J[3][0]+I[6][4]*J[4][0]+I[6][5]*J[5][0]+I[6][6]*J[6][0]);
                    ML=(1-F2-F3-F4-F5-F6-F7-F8)/(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5]+I[0][6]+I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5]+I[1][6]+I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5]+I[2][6]+I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5]+I[3][6]+I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5]+I[4][6]+I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5]+I[5][6]+I[6][0]+I[6][1]+I[6][2]+I[6][3]+I[6][4]+I[6][5]+I[6][6]); /*Multiplicador de Lagrange*/
                    incjj=sqrt(incii*incii*7)*ML;
                    F9=(ML*(I[0][0]+I[0][1]+I[0][2]+I[0][3]+I[0][4]+I[0][5]+I[0][6])+F2)*100; /*Fração Mineral 1*/
                    inckk=sqrt(incii*incii+incjj*incjj)*F9; /*incerteza do mineral 1*/
                    F10=(ML*(I[1][0]+I[1][1]+I[1][2]+I[1][3]+I[1][4]+I[1][5]+I[1][6])+F3)*100; /*Fração Mineral 2*/
                    incll=sqrt(incii*incii+incjj*incjj)*F10; /*incerteza do mineral 2*/
                    F11=(ML*(I[2][0]+I[2][1]+I[2][2]+I[2][3]+I[2][4]+I[2][5]+I[2][6])+F4)*100; /*Fração Mineral 3*/
                    incmm=sqrt(incii*incii+incjj*incjj)*F11; /*incerteza do mineral 3*/
                    F12=(ML*(I[3][0]+I[3][1]+I[3][2]+I[3][3]+I[3][4]+I[3][5]+I[3][6])+F5)*100; /*Fração Mineral 4*/
                    incnn=sqrt(incii*incii+incjj*incjj)*F12; /*incerteza do mineral 4*/
                    F13=(ML*(I[4][0]+I[4][1]+I[4][2]+I[4][3]+I[4][4]+I[4][5]+I[4][6])+F6)*100; /*Fração Mineral 5*/
                    incoo=sqrt(incii*incii+incjj*incjj)*F13; /*incerteza do mineral 5*/
                    F14=(ML*(I[5][0]+I[5][1]+I[5][2]+I[5][3]+I[5][4]+I[5][5]+I[5][6])+F7)*100; /*Fração Mineral 6*/
                    incpp=sqrt(incii*incii+incjj*incjj)*F14; /*incerteza do mineral 6*/
                    F15=(ML*(I[6][0]+I[6][1]+I[6][2]+I[6][3]+I[6][4]+I[6][5]+I[6][6])+F8)*100; /*Fração Mineral 7*/
                    incqq=sqrt(incii*incii+incjj*incjj)*F15; /*incerteza do mineral 7*/
                    }
                if (F1<0 & F1>-100 & F9>0 & F10>0 & F11>0 & F12>0 & F13>0 & F14>0 & F15>0){ /*Condições para evitar cálculos desnecessários*/
                    inicial=0;/*Cálculo do erro relativo dos óxidos*/                    
                    for(i=0;i<10;i++){              
                        Fi=(B[i][j*nnn+l]*F9*F1)/10000+(B[i][j*nnn+l+m]*F10*F1)/10000+(B[i][j*nnn+l+m+q]*F11*F1)/10000+(B[i][j*nnn+l+m+q+v]*F12*F1)/10000+(B[i][j*nnn+l+m+q+v+vv]*F13*F1)/10000+(B[i][j*nnn+l+m+q+v+vv+vvv]*F14*F1)/10000+(B[i][j*nnn+l+m+q+v+vv+vvv+vvvv]*F15*F1)/10000+G[i+1][j+1];
                      if (Fi>(0-G[i+1][j+1+k]*0.05-G[i+1][j+1]*0.05)) { /*Condição de Contorno: Fi não pode ser menor que zero, mas deve-se considerar as incertezas das medidas (5% de cada composição) */
                        Pi=Fi*100/(100+F1);
                    if (G[i+1][j+1+k]>0) {
                        Di=sqrt(((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k])*((G[i+1][j+1+k]-Pi)/G[i+1][j+1+k]));
                        gi=inicial+Di;
                        Dii[i]=Di*100;
                        inicial=gi;
                        }
                    if (G[i+1][j+1+k]==0 & Pi==0) {
                        Dii[i]=0;                     
                        }
                    if (G[i+1][j+1+k]==0 & Pi>0) {
                        Dii[i]=100;
                        gi=inicial+1;
                        inicial=gi;                     
                        }
                        }
                        else {
                        i=10;
                        gi=1000;
                        }
                      }
                      Errorel=100*gi/10;
                        
                if (Errorel>=t & Errorel<=u){   /*Erro Relativo utilizando Traços*/
                if (opcao1==1){
                err=0;
                for(ii=0;ii<nn;ii++){ 
                   Dg=(F9*BAS[ii][l]+F10*BAS[ii][l+m]+F11*BAS[ii][l+m+q]+F12*BAS[ii][l+m+q+v]+F13*BAS[ii][l+m+q+v+vv]+F14*BAS[ii][l+m+q+v+vv+vvv]+F15*BAS[ii][l+m+q+v+vv+vvv+vvvv])/100;
                   CL=T[ii+1][j+1]*exp((Dg-1)*log(1+F1/100));
                   if (CL==0 || T[ii+1][j+1+k]==0){
                      Erro=1;
                      }
                   else {
                      Erro=sqrt(((CL-T[ii+1][j+1+k])/T[ii+1][j+1+k])*((CL-T[ii+1][j+k+1])/T[ii+1][j+1+k]));
                      }
                   ErroTotal=err+Erro;
                   Erroi[ii]=Erro*100;
                   err=ErroTotal;
                   }
                   EP=100*ErroTotal/nn;
                   }
                   }
                   z=j+1+k;
                   w=l+j*nnn+m;
                   ww=l+j*nnn+m+q;
                   www=l+j*nnn+m+q+v;
                   wwww=l+j*nnn+m+q+v+vv;
                   wwwww=l+j*nnn+m+q+v+vv+vvv;
                   wwwwww=l+j*nnn+m+q+v+vv+vvv+vvvv;
                   if (Errorel>=t & Errorel<=u){
                        fprintf(arq_saida, str_amos[j+1]);
                        fprintf(arq_saida," a ");
                        fprintf(arq_saida, str_amos[z]);
                        fprintf(arq_saida, "\n");
                        fprintf(arq_saida, "Minerais Fracionados: ");
                        fprintf(arq_saida, str_mine[l+j*nnn]);
                        fprintf(arq_saida, " (%.2f", F9);
                        fprintf(arq_saida, " +/- %.2f)%% , ", inckk);
                        fprintf(arq_saida, str_mine[w]);
                        fprintf(arq_saida, " (%.2f", F10);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incll);
                        fprintf(arq_saida, str_mine[ww]);
                        fprintf(arq_saida, " (%.2f", F11);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incmm);
                        fprintf(arq_saida, str_mine[www]);
                        fprintf(arq_saida, " (%.2f", F12);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incnn);
                        fprintf(arq_saida, str_mine[wwww]);
                        fprintf(arq_saida, " (%.2f", F13);
                        fprintf(arq_saida, " +/- %.2f)%% , ", incoo);
                        fprintf(arq_saida, str_mine[wwwww]);
                        fprintf(arq_saida, " (%.2f", F14);
                        fprintf(arq_saida, " +/- %.2f)%% e ", incpp);
                        fprintf(arq_saida, str_mine[wwwwww]);
                        fprintf(arq_saida, " (%.2f", F15);
                        fprintf(arq_saida, " +/- %.2f)%%\n", incqq);
                        fprintf(arq_saida, "Subtraído do Magma Inicial: (%.2f", -1*F1);
                        fprintf(arq_saida, " +/- %.2f)%%\n\n", incw);
                        fprintf(arq_saida, "Erros Relativos (maiores):\n");
                        for(i=0;i<11;i++){
                           if (i<3){    /*Condição para não imprimir Fe2O3 e sim FeOt*/
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           if (i>4){
                           fprintf(arq_saida, str_oxido[i+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i-1]);
                           }
                           if (i==3){
                           fprintf(arq_saida, "FeOt");
                           fprintf(arq_saida, ":  %.2f%%\n", Dii[i]);
                           }
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (maiores): %.2f%%\n\n", Errorel);
                        if (opcao1==1){
                           fprintf(arq_saida, "Erros Relativos (traços):\n");
                        for(ii=0;ii<nn;ii++){
                           fprintf(arq_saida, str_traco[ii+1]);
                           fprintf(arq_saida, ":  %.2f%%\n", Erroi[ii]);
                           }
                           fprintf(arq_saida, "Média dos Erros Relativos (traços): %.2f%%\n\n\n", EP);
                        }
                        }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                fclose(arq_saida);
                }
}                                              /*****    FIM    *****/
