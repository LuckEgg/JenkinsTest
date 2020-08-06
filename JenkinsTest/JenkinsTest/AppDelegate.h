//
//  AppDelegate.h
//  JenkinsTest
//
//  Created by 孙保财 on 2020/8/6.
//  Copyright © 2020 sunbaocai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

