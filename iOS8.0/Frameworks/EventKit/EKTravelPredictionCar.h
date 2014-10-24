//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKTravelPrediction.h>

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTravelPredictionCar : EKTravelPrediction <NSSecureCoding>
{
    BOOL _hasTrafficIncidentOnRoute;
    unsigned int _currentTrafficDensity;
    unsigned int _historicTrafficDensity;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    unsigned int _travelState;
    double _travelStateScore;
}

@property(readonly, nonatomic) double travelStateScore; // @synthesize travelStateScore=_travelStateScore;
@property(readonly, nonatomic) unsigned int travelState; // @synthesize travelState=_travelState;
@property(readonly, nonatomic) NSString *routeIncidentStreetName; // @synthesize routeIncidentStreetName=_routeIncidentStreetName;
@property(readonly, nonatomic) int routeIncidentSignificance; // @synthesize routeIncidentSignificance=_routeIncidentSignificance;
@property(readonly, nonatomic) int routeIncidentType; // @synthesize routeIncidentType=_routeIncidentType;
@property(readonly, nonatomic) BOOL hasTrafficIncidentOnRoute; // @synthesize hasTrafficIncidentOnRoute=_hasTrafficIncidentOnRoute;
@property(readonly, nonatomic) unsigned int historicTrafficDensity; // @synthesize historicTrafficDensity=_historicTrafficDensity;
@property(readonly, nonatomic) unsigned int currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)advice;
- (void)dealloc;
- (void)setTravelState:(unsigned int)arg1 withConfidence:(double)arg2;
- (void)addTrafficIncidentOfType:(int)arg1 withSignificance:(int)arg2 onStreet:(id)arg3;
- (void)setTrafficConditionsCurrent:(unsigned int)arg1 historic:(unsigned int)arg2;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 hypothesizer:(id)arg5;

@end
