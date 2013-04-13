#include "erl_nif.h"

static ErlNifResourceType* erl_gpio_RESOURCE = NULL;

typedef struct
{
  static volatile uint32_t *gpio_map
} erl_gpio_handle;

// Prototypes
static ERL_NIF_TERM erl_gpio_new(ErlNifEnv* env, int argc,
                                   const ERL_NIF_TERM argv[]);
static ERL_NIF_TERM erl_gpio_output(ErlNifEnv* env, int argc,
                                          const ERL_NIF_TERM argv[]);

