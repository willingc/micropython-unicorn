void mp_hal_delay_ms(mp_uint_t ms);
void mp_hal_delay_us(mp_uint_t us);
mp_uint_t mp_hal_ticks_ms(void);
mp_uint_t mp_hal_ticks_us(void);
static inline mp_uint_t mp_hal_ticks_cpu(void) { return 0; }
void mp_hal_set_interrupt_char(int c);
