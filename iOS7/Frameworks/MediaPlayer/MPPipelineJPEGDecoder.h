/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MPPipelineJPEGDecoder : NSObject
{
    struct StackItem *stackTopBGRA;
    struct StackItem *stackTop420;
    struct StackItem *stackTopJPEG;
    NSObject<OS_dispatch_queue> *stackQueueBGRA;
    NSObject<OS_dispatch_queue> *stackQueue420;
    NSObject<OS_dispatch_queue> *stackQueueJPEG;
    struct __CFDictionary *acceleratorOptions;
    struct __CFDictionary *surfaceBGRAOptions;
    struct CGSize imageSize;
    unsigned long long requestedImageCount;
    int currentBGRASurfaceCount;
    unsigned long long maxJPEGSize;
}

+ (struct __IOSurfaceAccelerator *)_popSurfaceAccelerator;
+ (void)_pushSurfaceAccelerator:(struct __IOSurfaceAccelerator *)arg1;
+ (struct __IOSurfaceAccelerator *)_createAccelerator;
+ (id)_stackQueueTransferSession;
@property unsigned long long maxJPEGSize; // @synthesize maxJPEGSize;
- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (int)_decodeJPEG:(id)arg1 withInputSurface:(struct __IOSurface *)arg2 toIOSurface:(struct __IOSurface *)arg3;
- (id)_newImageFrom420Surface:(struct __IOSurface *)arg1;
- (void)_pushBGRASurface:(struct __IOSurface *)arg1;
- (struct __IOSurface *)_popBGRASurface;
- (void)_pushJPEGSurface:(struct __IOSurface *)arg1;
- (struct __IOSurface *)_popJPEGSurfaceOfSize:(unsigned long long)arg1;
- (void)_push420Surface:(struct __IOSurface *)arg1;
- (struct __IOSurface *)_pop420Surface;
- (_Bool)_removeBGRASurface;
- (struct __IOSurface *)_createBGRASurface;
- (struct __IOSurface *)_createJPEGSurface;
- (struct __IOSurface *)_create420Surface;
- (void)dealloc;
- (id)newImageFromJPEGData:(id)arg1;
- (id)newImageFrom420Data:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 cachedCount:(long long)arg2;

@end

