/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CATiledLayer.h"

@interface MKTiledLayer : CATiledLayer
{
    struct {
        unsigned int displayBaseTiles:1;
        unsigned int delegateDisplayBaseTiles:1;
        unsigned int delegateRenderLayer:1;
    } _flags;
}

+ (unsigned int)prefetchedTiles;
+ (double)fadeDuration;
+ (id)defaultValueForKey:(id)arg1;
+ (unsigned int)levelsOfDetail;
+ (struct CGSize)contentSize;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)display;
@property(readonly, nonatomic) struct CADoubleRect visibleDoubleRect;
- (void)displayBaseTiles;
- (void)setNeedsDisplayInTileKey:(const struct _GEOTileKey *)arg1;
- (void)displayTileKey:(const struct _GEOTileKey *)arg1;
- (void)flush;
- (void)setDelegate:(id)arg1;

@end

