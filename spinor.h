#ifndef __SPINOR_H__
#define __SPINOR_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <fel.h>

int spinor_detect(struct xfel_ctx_t * ctx, char * name, uint64_t * capacity);
int spinor_erase(struct xfel_ctx_t * ctx, uint64_t addr, uint64_t len);
int spinor_read(struct xfel_ctx_t * ctx, uint64_t addr, void * buf, uint64_t len);
int spinor_write(struct xfel_ctx_t * ctx, uint64_t addr, void * buf, uint64_t len);

#ifdef __cplusplus
}
#endif

#endif /* __SPINOR_H__ */
