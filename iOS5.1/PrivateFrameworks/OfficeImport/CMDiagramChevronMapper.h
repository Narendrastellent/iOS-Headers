/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramChevronMapper : CMDiagramShapeMapper
{
    BOOL mHChevron;
}

- (void)setIsHChevron:(BOOL)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (id)_suggestedBoundsForNodeAtIndex:(unsigned int)arg1;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;

@end
