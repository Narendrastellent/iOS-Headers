//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDataProvider, NSData, NSDictionary, NSString, NSURL, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequest : NSObject
{
    BOOL _shouldAuthenticate;
    NSURL *_requestURL;
    NSString *_action;
    NSData *_bodyData;
    int _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    int _method;
    ISDataProvider *_responseDataProvider;
    BOOL _concurrent;
    BOOL _includeDeviceGUID;
    SBKTransaction *_transaction;
}

+ (id)_contentTypeStringForBodyContentType:(int)arg1;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(int)arg1;
+ (id)_methodStringForMethod:(int)arg1;
+ (int)bodyContentEncodingType;
+ (int)bodyContentType;
+ (id)requestWithRequestURL:(id)arg1;
@property(retain, nonatomic) ISDataProvider *responseDataProvider; // @synthesize responseDataProvider=_responseDataProvider;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) BOOL includeDeviceGUID; // @synthesize includeDeviceGUID=_includeDeviceGUID;
@property(nonatomic) BOOL shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(nonatomic) int method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) BOOL concurrent; // @synthesize concurrent=_concurrent;
@property(retain, nonatomic) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)newURLOperation;
- (id)_defaultHeaderFields;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)copyRequestProperties;
- (void)setBodyDataWithPropertyList:(id)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)descriptionWithoutHeaderFields;
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;
- (id)initWithRequestURL:(id)arg1;

@end

