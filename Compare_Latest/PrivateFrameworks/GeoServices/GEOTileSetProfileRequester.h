/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface GEOTileSetProfileRequester : NSObject
{
    NSMapTable *_providers;
    BOOL _hasReadProviders;
}

+ (id)sharedTileSetProfileRequester;
- (BOOL)supportsTileSetStyle:(const struct _GEOTileKey *)arg1;
- (id)tileSetProfileForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_tileSetInfoForTileKey:(const struct _GEOTileKey *)arg1;
- (void)registerInfo:(Class)arg1 forTileKeyProvider:(unsigned short)arg2;
- (void)dealloc;
- (id)init;

@end
