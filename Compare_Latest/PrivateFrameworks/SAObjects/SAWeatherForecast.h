//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString, SAWeatherCondition;

@interface SAWeatherForecast : AceObject <SAAceSerializable>
{
}

+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;
+ (id)forecast;
@property(copy, nonatomic) NSNumber *timeIndex;
@property(copy, nonatomic) NSNumber *isUserRequested;
@property(retain, nonatomic) SAWeatherCondition *condition;
@property(copy, nonatomic) NSNumber *chanceOfPrecipitation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

