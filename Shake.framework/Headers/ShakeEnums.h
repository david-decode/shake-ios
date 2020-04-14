//
//  ShakeEnums.h
//  Shake
//
//  Created by Hana Sokolović on 01/03/2019.
//  Copyright © 2019 Shake Technologies, Inc. All rights reserved.
//

#ifndef ShakeEnums_h
#define ShakeEnums_h

// Enum for invocation events - 1 is default
typedef NS_OPTIONS(NSUInteger, ShakeInvocationEvent) {
    ShakeInvocationEventShake = 1<<0,
    ShakeInvocationEventButton = 1<<1,
    ShakeInvocationEventScreenshot = 1<<2,
    // TODO: SHK2246
    // Search for the TODO above to find all places in code to reenable the functionality when needed
//    ShakeInvocationEventRightEdgePan = 1<<3,
//    ShakeInvocationEventAutoReport = 1<<4,
    /// TODO: Uncomment for manual invocation
//    ShakeInvocationEventManual = 1<<5
};

#endif /* ShakeEnums_h */
