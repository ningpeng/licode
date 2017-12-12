#ifndef ERIZOAPI_MEDIADEFINITIONS_H_
#define ERIZOAPI_MEDIADEFINITIONS_H_

#include <nan.h>
#include <MediaDefinitions.h>


/*
 * Wrapper class of erizo::MediaSink
 */
class MediaSink : public Nan::ObjectWrap {
 public:
    erizo::MediaSink* msink;
};


/*
 * Wrapper class of erizo::MediaSource
 */
class MediaSource : public Nan::ObjectWrap {
 public:
    erizo::MediaSource* msource;
};


#define FUNC_TRACE  printf("===tracex=== %s:%d    %s\n"  , __FUNCTION__, __LINE__, __PRETTY_FUNCTION__);


#endif  // ERIZOAPI_MEDIADEFINITIONS_H_
