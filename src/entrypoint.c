// We need to forward routine registration from C to Rust
// to avoid the linker removing the static library.

void R_init_rcarbon2rust_extendr(void *dll);

void R_init_rcarbon2rust(void *dll) {
    R_init_rcarbon2rust_extendr(dll);
}
