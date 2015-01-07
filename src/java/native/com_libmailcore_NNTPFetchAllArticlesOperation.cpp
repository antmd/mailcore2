#include "com_libmailcore_NNTPFetchAllArticlesOperation.h"

#include "MCBaseTypes.h"
#include "JavaHandle.h"
#include "TypesUtils.h"
#include "MCNNTPFetchAllArticlesOperation.h"

using namespace mailcore;

#define nativeType NNTPFetchAllArticlesOperation
#define javaType nativeType

JNIEXPORT jobject JNICALL Java_com_libmailcore_NNTPFetchAllArticlesOperation_articles
  (JNIEnv * env, jobject obj)
{
    return MC_JAVA_BRIDGE_GET(articles);
}

MC_JAVA_BRIDGE
