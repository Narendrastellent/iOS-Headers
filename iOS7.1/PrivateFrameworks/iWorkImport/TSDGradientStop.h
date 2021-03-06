//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "TSDMixing.h"

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
    float mFraction;
    float mInflection;
}

+ (id)gradientStopWithColor:(id)arg1 fraction:(float)arg2 inflection:(float)arg3;
+ (id)gradientStopWithColor:(id)arg1 fraction:(float)arg2;
@property(readonly, nonatomic) float inflection; // @synthesize inflection=mInflection;
@property(readonly, nonatomic) float fraction; // @synthesize fraction=mFraction;
@property(readonly, nonatomic) TSUColor *color; // @synthesize color=mColor;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)gradientStopWithInflection:(float)arg1;
- (id)gradientStopWithColor:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_setInflection:(float)arg1;
- (void)p_setFraction:(float)arg1;
- (void)p_setColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)initWithGradientStop:(id)arg1;
- (id)initWithColor:(id)arg1 fraction:(float)arg2 inflection:(float)arg3;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;
- (void)saveToArchive:(struct GradientArchive_GradientStop *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct GradientArchive_GradientStop *)arg1 unarchiver:(id)arg2;

@end

