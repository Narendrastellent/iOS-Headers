//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesTypeBar.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar
{
}

- (BOOL)supportsBarGap;
- (id)elementBuilder;
- (unsigned int)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (unsigned int)seriesIndexForDrawing:(id)arg1;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned int)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned int)arg1 index:(unsigned int)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (id)init;
- (id)g_genericToSpecificPropertyMapStackedBar;

@end

