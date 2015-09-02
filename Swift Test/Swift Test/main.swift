//
//  main.swift
//  Swift Test
//
//  Created by Steven Chang on 8/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

import Foundation
/*
var myVariable = 42
myVariable = 50
let myConstant = 42

let implicitInteger = 70
let implicitDouble = 70.0
let explicitDouble:Double = 70

let label = "The width is"
let width = 94
let widthLabel = label + String(width)

let apples = 3
let orangers = 5
let appleSummary = "I have \(apples) apples"
let fruitSummary = "I have \(apples+orangers) pieces of fruit"

println(fruitSummary)

var shoppingList = ["catfish","water","tulips","blue paint"]
shoppingList[1] = "bottle of water"

var occupations = [
    "Malcolm":"Captain",
    "Kaylee":"Mechanic",
]
println(occupations)
occupations["Jayne"] = "Public Relations"

println(occupations)

let individualScores = [75,43,103,87,12]
var teamScore = 0
for score in individualScores
{
    if score > 50
    {
        teamScore += 3
    }
    else
    {
        teamScore += 1
    }
}
print(teamScore)

var optionalString:String? = "Hello"
println(optionalString == nil)

var optionalName:String? = "John Appleseed"
var greeting = "Hello!"
println(greeting)
if let name = optionalName
{
    greeting = "Hello,\(name)"
}
println(greeting)

*/
let vegetable = "red pepper"
switch vegetable
{
case "celery":
    let vegetableComment = "Add some raisins and make ants on a log"
case "cucumber","watercress":
    let vegetableComment = "That would make a good tea sandwich"
case let x where x.hasSuffix("pepper"):
    let vegetableComment = "Is it a spicy \(x)"
default:
    let vegetableComment = "Everything tastes good in soup"
}

//println(vegetableComment)