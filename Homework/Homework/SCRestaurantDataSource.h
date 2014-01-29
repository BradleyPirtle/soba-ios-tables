//
//  SCRestaurantDataSource.h
//  Assignment
//
//  Created by Philip Dow on 1/28/14.
//  Copyright (c) 2014 Philip Dow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCRestaurantDataSource : NSObject

@property (readonly) NSArray *restaurants;

+ (id)sharedDataSource;

@end
