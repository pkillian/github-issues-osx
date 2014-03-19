//
//  GIAppDelegate.h
//  Github Issues
//
//  Created by Patrick Killian on 3/19/14.
//  Copyright (c) 2014 Patrick Killian. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface GIAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
