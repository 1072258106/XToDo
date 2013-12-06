//
//  XToDoWindowController.h
//  XToDo
//
//  Created by Travis on 13-12-6.
//  Copyright (c) 2013年 Plumn LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface XToDoWindowController : NSWindowController

@property(nonatomic,retain) NSArray *items;

@property(nonatomic,copy) NSString *projectPath;

@end
