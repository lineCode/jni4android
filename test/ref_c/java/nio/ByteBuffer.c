/*
 * Copyright (C) 2015 Zhang Rui <bbcallen@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * https://github.com/Bilibili/jni4android
 * This file is automatically generated by jni4android, do not modify.
 */


#include "ByteBuffer.h"

typedef struct J4AC_java_nio_ByteBuffer {
    jclass id;

    jmethodID method_allocate;
    jmethodID method_allocateDirect;
    jmethodID method_limit;
} J4AC_java_nio_ByteBuffer;
static J4AC_java_nio_ByteBuffer class_J4AC_java_nio_ByteBuffer;

jobject J4AC_java_nio_ByteBuffer__allocate(JNIEnv *env, jint capacity)
{
    return (*env)->CallStaticObjectMethod(env, class_J4AC_java_nio_ByteBuffer.id, class_J4AC_java_nio_ByteBuffer.method_allocate, capacity);
}

jobject J4AC_java_nio_ByteBuffer__allocate__catchAll(JNIEnv *env, jint capacity)
{
    jobject ret_object = J4AC_java_nio_ByteBuffer__allocate(env, capacity);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_java_nio_ByteBuffer__allocate__asGlobalRef__catchAll(JNIEnv *env, jint capacity)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_java_nio_ByteBuffer__allocate__catchAll(env, capacity);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

jobject J4AC_java_nio_ByteBuffer__allocateDirect(JNIEnv *env, jint capacity)
{
    return (*env)->CallStaticObjectMethod(env, class_J4AC_java_nio_ByteBuffer.id, class_J4AC_java_nio_ByteBuffer.method_allocateDirect, capacity);
}

jobject J4AC_java_nio_ByteBuffer__allocateDirect__catchAll(JNIEnv *env, jint capacity)
{
    jobject ret_object = J4AC_java_nio_ByteBuffer__allocateDirect(env, capacity);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_java_nio_ByteBuffer__allocateDirect__asGlobalRef__catchAll(JNIEnv *env, jint capacity)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_java_nio_ByteBuffer__allocateDirect__catchAll(env, capacity);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

jobject J4AC_java_nio_ByteBuffer__limit(JNIEnv *env, jobject thiz, jint newLimit)
{
    return (*env)->CallObjectMethod(env, thiz, class_J4AC_java_nio_ByteBuffer.method_limit, newLimit);
}

jobject J4AC_java_nio_ByteBuffer__limit__catchAll(JNIEnv *env, jobject thiz, jint newLimit)
{
    jobject ret_object = J4AC_java_nio_ByteBuffer__limit(env, thiz, newLimit);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_java_nio_ByteBuffer__limit__asGlobalRef__catchAll(JNIEnv *env, jobject thiz, jint newLimit)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_java_nio_ByteBuffer__limit__catchAll(env, thiz, newLimit);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

int J4A_loadClass__J4AC_java_nio_ByteBuffer(JNIEnv *env)
{
    int         ret                   = -1;
    const char *J4A_UNUSED(name)      = NULL;
    const char *J4A_UNUSED(sign)      = NULL;
    jclass      J4A_UNUSED(class_id)  = NULL;
    int         J4A_UNUSED(api_level) = 0;

    sign = "java/nio/ByteBuffer";
    class_J4AC_java_nio_ByteBuffer.id = J4A_FindClass__asGlobalRef__catchAll(env, sign);
    if (class_J4AC_java_nio_ByteBuffer.id == NULL)
        goto fail;

    class_id = class_J4AC_java_nio_ByteBuffer.id;
    name     = "allocate";
    sign     = "(I)Ljava/nio/ByteBuffer;";
    class_J4AC_java_nio_ByteBuffer.method_allocate = J4A_GetStaticMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_java_nio_ByteBuffer.method_allocate == NULL)
        goto fail;

    class_id = class_J4AC_java_nio_ByteBuffer.id;
    name     = "allocateDirect";
    sign     = "(I)Ljava/nio/ByteBuffer;";
    class_J4AC_java_nio_ByteBuffer.method_allocateDirect = J4A_GetStaticMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_java_nio_ByteBuffer.method_allocateDirect == NULL)
        goto fail;

    class_id = class_J4AC_java_nio_ByteBuffer.id;
    name     = "limit";
    sign     = "(I)Ljava/nio/Buffer;";
    class_J4AC_java_nio_ByteBuffer.method_limit = JJK_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_java_nio_ByteBuffer.method_limit == NULL)
        goto fail;

    ALOGD("J4ALoader: OK: '%s' loaded\n", "java.nio.ByteBuffer");
    ret = 0;
fail:
    return ret;
}
