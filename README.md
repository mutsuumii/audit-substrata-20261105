# Security audit: glaretechnologies/substrata

Date: 2026-11-05 | Auditor: [mutsuumii](https://github.com/mutsuumii)

## Summary

Found 1 issue(s): 1 high.

## Findings

### 1. [HIGH] Potential use-after-free

**CWE-416** | `opus/opus-1.3.1/celt/celt_decoder.c` line 222

Pointer not set to NULL after free. If reused, attacker controls memory layout.

```
opus_free(st);
```

**Fix:** Set pointer to NULL immediately after free(). Use address sanitizer in builds.
---
