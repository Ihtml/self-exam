// 编写方法double sumS(int n), 计算表达式前n项的和S
// S = 2/1 - 3/2 + 5/3 - 8/5 + 13/8 - 21/13
// 后一项的分母 = 前一项的分子， 后一项的分子 = 前一项的分子和分母的和
double sumS(int n){
    double S, fz, fm, temp;
    int flag;
    S = 0.0; fz = 2; fm = 1.0; flag = 1;
    for(int i = 1; i <= n; i++){
        S = S + flag * fz/fm;
        temp = fm;
        fm = fz;
        fz += temp;
        flag = -flag;
    }
    return S;
}