
void (*get_func_ptr(void));

int main(void) {
    void (*func_ptr)(void);
    func_ptr = get_func_ptr(); // Get pointer to a function returned by get_func_ptr

    func_ptr();

    return 0;
}
