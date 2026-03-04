#ifndef MS_TYPES_H
#define MS_TYPES_H

typedef enum{
    SM_SUCESS = 0,
    SM_ERR_NULL_PTR,
    SM_ERR_MALLOC,
    SM_ERR_EMPTY,
    SM_ERR_NOT_FOUND
} sm_status;

#endif //SM_TYPES_H