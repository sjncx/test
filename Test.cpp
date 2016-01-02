
#include "mex.h"

#include "TENE.h"

#pragma comment(lib, "TENE.lib")

// nlhs:输出参数的个数
// *plhs[]:输出参数的mxArray数组
// nrhs:输入参数的个数
// *prhs[]:输入参数的mxArray数组


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    CTENE c;
    int i,Num;
    double *p1, *p2;
//    mexPrintf("num is: %d\n", nrhs);
//     p1 = (int )mxGetpr(prhs[0]);
     p2 = (int )prhs[1];
      p1 = ((int)(* mxGetPr(prhs[0])));
      p2 = ((int *)mxGetPr(prhs[1]));
    Num = mxGetScalar(prhs[2]);
    for(i=0; i<Num;i++)
    {
        p1 = mxGetPr(prhs[0]);
        p2 = mxGetPr(prhs[1]);
        mexPrintf("p2 is: %lf\n", (p2[i+1]));
    }
//     p1  = mxGetScalar(prhs[0]);
//     p2  = mxGetScalar(prhs[1]);
//    mexPrintf("p1 is: %d\n", p1);
//     plhs[0] = mxCreateDoubleMatrix(1,Num,mxREAL);
//     
//     double *output = (double *)mxGetPr(plhs[0]);
//     
//     c.ex(p1, p2, Num);
//     output = p1;
}