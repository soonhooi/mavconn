/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "rgbd_camera_image_message_t.h"

static int __rgbd_camera_image_message_t_hash_computed;
static int64_t __rgbd_camera_image_message_t_hash;
 
int64_t __rgbd_camera_image_message_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __rgbd_camera_image_message_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__rgbd_camera_image_message_t_get_hash };
    (void) cp;
 
    int64_t hash = 0x20270f35bcb0f190LL
         + __int64_t_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __rgbd_camera_image_message_t_get_hash(void)
{
    if (!__rgbd_camera_image_message_t_hash_computed) {
        __rgbd_camera_image_message_t_hash = __rgbd_camera_image_message_t_hash_recursive(NULL);
        __rgbd_camera_image_message_t_hash_computed = 1;
    }
 
    return __rgbd_camera_image_message_t_hash;
}
 
int __rgbd_camera_image_message_t_encode_array(void *buf, int offset, int maxlen, const rgbd_camera_image_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].camera_name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].camera_params, 4);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].image_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].image_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rgb_data_length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, p[element].rgb_data, p[element].rgb_data_length);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].depth_data_length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, p[element].depth_data, p[element].depth_data_length);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].camera_pose, 6);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int rgbd_camera_image_message_t_encode(void *buf, int offset, int maxlen, const rgbd_camera_image_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __rgbd_camera_image_message_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __rgbd_camera_image_message_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __rgbd_camera_image_message_t_encoded_array_size(const rgbd_camera_image_message_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __int64_t_encoded_array_size(&(p[element].utime), 1);
 
        size += __string_encoded_array_size(&(p[element].camera_name), 1);
 
        size += __float_encoded_array_size(p[element].camera_params, 4);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_x), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_y), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_width), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].roi_height), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].image_width), 1);
 
        size += __int16_t_encoded_array_size(&(p[element].image_height), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].rgb_data_length), 1);
 
        size += __int8_t_encoded_array_size(p[element].rgb_data, p[element].rgb_data_length);
 
        size += __int64_t_encoded_array_size(&(p[element].depth_data_length), 1);
 
        size += __int8_t_encoded_array_size(p[element].depth_data, p[element].depth_data_length);
 
        size += __double_encoded_array_size(p[element].camera_pose, 6);
 
    }
    return size;
}
 
int rgbd_camera_image_message_t_encoded_size(const rgbd_camera_image_message_t *p)
{
    return 8 + __rgbd_camera_image_message_t_encoded_array_size(p, 1);
}
 
int __rgbd_camera_image_message_t_decode_array(const void *buf, int offset, int maxlen, rgbd_camera_image_message_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].camera_name), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].camera_params, 4);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_x), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_y), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].roi_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].image_width), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].image_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rgb_data_length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        p[element].rgb_data = (int8_t*) lcm_malloc(sizeof(int8_t) * p[element].rgb_data_length);
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, p[element].rgb_data, p[element].rgb_data_length);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].depth_data_length), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        p[element].depth_data = (int8_t*) lcm_malloc(sizeof(int8_t) * p[element].depth_data_length);
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, p[element].depth_data, p[element].depth_data_length);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].camera_pose, 6);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __rgbd_camera_image_message_t_decode_array_cleanup(rgbd_camera_image_message_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_decode_array_cleanup(&(p[element].utime), 1);
 
        __string_decode_array_cleanup(&(p[element].camera_name), 1);
 
        __float_decode_array_cleanup(p[element].camera_params, 4);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_x), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_y), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_width), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].roi_height), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].image_width), 1);
 
        __int16_t_decode_array_cleanup(&(p[element].image_height), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].rgb_data_length), 1);
 
        __int8_t_decode_array_cleanup(p[element].rgb_data, p[element].rgb_data_length);
        if (p[element].rgb_data) free(p[element].rgb_data);
 
        __int64_t_decode_array_cleanup(&(p[element].depth_data_length), 1);
 
        __int8_t_decode_array_cleanup(p[element].depth_data, p[element].depth_data_length);
        if (p[element].depth_data) free(p[element].depth_data);
 
        __double_decode_array_cleanup(p[element].camera_pose, 6);
 
    }
    return 0;
}
 
int rgbd_camera_image_message_t_decode(const void *buf, int offset, int maxlen, rgbd_camera_image_message_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __rgbd_camera_image_message_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __rgbd_camera_image_message_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int rgbd_camera_image_message_t_decode_cleanup(rgbd_camera_image_message_t *p)
{
    return __rgbd_camera_image_message_t_decode_array_cleanup(p, 1);
}
 
int __rgbd_camera_image_message_t_clone_array(const rgbd_camera_image_message_t *p, rgbd_camera_image_message_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_clone_array(&(p[element].utime), &(q[element].utime), 1);
 
        __string_clone_array(&(p[element].camera_name), &(q[element].camera_name), 1);
 
        __float_clone_array(p[element].camera_params, q[element].camera_params, 4);
 
        __int32_t_clone_array(&(p[element].roi_x), &(q[element].roi_x), 1);
 
        __int32_t_clone_array(&(p[element].roi_y), &(q[element].roi_y), 1);
 
        __int32_t_clone_array(&(p[element].roi_width), &(q[element].roi_width), 1);
 
        __int32_t_clone_array(&(p[element].roi_height), &(q[element].roi_height), 1);
 
        __int16_t_clone_array(&(p[element].image_width), &(q[element].image_width), 1);
 
        __int16_t_clone_array(&(p[element].image_height), &(q[element].image_height), 1);
 
        __int64_t_clone_array(&(p[element].rgb_data_length), &(q[element].rgb_data_length), 1);
 
        q[element].rgb_data = (int8_t*) lcm_malloc(sizeof(int8_t) * q[element].rgb_data_length);
        __int8_t_clone_array(p[element].rgb_data, q[element].rgb_data, p[element].rgb_data_length);
 
        __int64_t_clone_array(&(p[element].depth_data_length), &(q[element].depth_data_length), 1);
 
        q[element].depth_data = (int8_t*) lcm_malloc(sizeof(int8_t) * q[element].depth_data_length);
        __int8_t_clone_array(p[element].depth_data, q[element].depth_data, p[element].depth_data_length);
 
        __double_clone_array(p[element].camera_pose, q[element].camera_pose, 6);
 
    }
    return 0;
}
 
rgbd_camera_image_message_t *rgbd_camera_image_message_t_copy(const rgbd_camera_image_message_t *p)
{
    rgbd_camera_image_message_t *q = (rgbd_camera_image_message_t*) malloc(sizeof(rgbd_camera_image_message_t));
    __rgbd_camera_image_message_t_clone_array(p, q, 1);
    return q;
}
 
void rgbd_camera_image_message_t_destroy(rgbd_camera_image_message_t *p)
{
    __rgbd_camera_image_message_t_decode_array_cleanup(p, 1);
    free(p);
}
 
int rgbd_camera_image_message_t_publish(lcm_t *lc, const char *channel, const rgbd_camera_image_message_t *p)
{
      int max_data_size = rgbd_camera_image_message_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = rgbd_camera_image_message_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _rgbd_camera_image_message_t_subscription_t {
    rgbd_camera_image_message_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void rgbd_camera_image_message_t_handler_stub (const lcm_recv_buf_t *rbuf, 
                            const char *channel, void *userdata)
{
    int status;
    rgbd_camera_image_message_t p;
    memset(&p, 0, sizeof(rgbd_camera_image_message_t));
    status = rgbd_camera_image_message_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding rgbd_camera_image_message_t!!!\n", status);
        return;
    }

    rgbd_camera_image_message_t_subscription_t *h = (rgbd_camera_image_message_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    rgbd_camera_image_message_t_decode_cleanup (&p);
}

rgbd_camera_image_message_t_subscription_t* rgbd_camera_image_message_t_subscribe (lcm_t *lcm, 
                    const char *channel, 
                    rgbd_camera_image_message_t_handler_t f, void *userdata)
{
    rgbd_camera_image_message_t_subscription_t *n = (rgbd_camera_image_message_t_subscription_t*)
                       malloc(sizeof(rgbd_camera_image_message_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel, 
                                 rgbd_camera_image_message_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg rgbd_camera_image_message_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int rgbd_camera_image_message_t_unsubscribe(lcm_t *lcm, rgbd_camera_image_message_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr, 
           "couldn't unsubscribe rgbd_camera_image_message_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

