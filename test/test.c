int getReturnValue () {
    char *s = __FUNCTION__;
    return 1 + 1;
}

int main () {
    return getReturnValue();
}