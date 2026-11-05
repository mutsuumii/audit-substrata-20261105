# Potential use-after-free
# CWE-416 | Severity: HIGH
# File: opus/opus-1.3.1/celt/celt_decoder.c line 222

**Risk:** Pointer not set to NULL after free. If reused, attacker controls memory layout.

**Fix:** Set pointer to NULL immediately after free(). Use address sanitizer in builds.
