//
//  BIDAppDelegate.h
//  Core Data Persistence
//
//  Created by Dexter Launchlabs on 7/30/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BIDViewController;
@interface BIDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *
persistentStoreCoordinator;
@property (strong, nonatomic) BIDViewController *rootController;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
