int main() {
    #ifdef CICD_ASD
    return (int)CICD_ASD;
    #endif
    return -1;
}