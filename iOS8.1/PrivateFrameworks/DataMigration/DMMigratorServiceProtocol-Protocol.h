//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DMMigratorServiceProtocol <NSObject>
- (void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)orderedPluginIdentifiersWithCompletion:(void (^)(NSArray *))arg1;
- (void)migrateWithCompletion:(void (^)(BOOL))arg1;
@end
