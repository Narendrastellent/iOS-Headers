//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface FBLayerHostContainer : CALayer
{
    float _scale;
    float _rotation;
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (id)description;
- (void)setDebug:(BOOL)arg1;

@end

