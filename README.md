### SoBA iOS Class: Table Views

#### Assignment

You will be implementing a "nearby restaurants social media" application. Imagine an application that shows you nearby restaurants and lets you keep a profile. The interface requires two tabs, one for the restaurants list and another for your profile. Inside each tab you will need to implement a custom table view controller. The restuarants table view will use dynamic prototype cells and the profile should use static cells. Implement the interface according to the screenshots and storboard image included (you will have to add all the inteface yourself!) and the following specifications:

##### Additional Specifications

You will need to implement two custom UITableViewController subclasses and a custom UITableViewCell. You will be able to get rid of the custom UIViewController classes that the project includes by default.

One of your table view controller subclasses manages the restaurant list with the dynamic prototype cells. The other manages the profile with static cells.

When the user selects a restaurant from the list, you should push to a detail view with a full screen map that would show the location of the restaurant. Make sure you set the navigation title of the detail view to the name of the restauarant.

When the user clicks on the profile picture, you should push to a detail view with a full screen image. Watch the aspect ratios!

In the profile table, set the profile image and all the text from the controller! Do not set them directly in the storyboard. In a real application, that information would depend on what came from the network, so you'd have to set it from code.

##### Data Source

I've included a singleton data source object and a custom subclass that implements your application's model. Use these classes to get the restuarants to display:

	SCRestaurantDataSource
	SCRestaurant
	
SCRestaurant provides to attributes that you should use, name and kind.

SCRestaurantDataSource is a singleton that provides access to the array of restaurants. Imagine that this is a class which abstracts the network access and give your other classes single line access to the restaurant list. You can get the array like:

	[[SCRestaurantDataSource sharedDataSource] restaurants]
	
That returns an array of SCRestaurant objects which you can access normally.