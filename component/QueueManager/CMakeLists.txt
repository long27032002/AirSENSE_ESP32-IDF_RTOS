set(app_src queue_lib.c)
set(pre_req log freertos)
idf_component_register(SRCS ${app_src}
                    INCLUDE_DIRS "."
                    REQUIRES ${pre_req})
