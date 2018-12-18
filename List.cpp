#include <iomanip>  // setw
#include <iostream> // ostream, endl
#include "List.h"

namespace CS175
{
	// Default Constructor
	List::List()
		: head(nullptr)
		, tail(nullptr)
	{
		list++;
		Node::nodes_alive++;
	}
	
	// Copy constructor for constructing a list from an existing list
	List::List(const int *array, int size)
	{
		
	}
	
	// Destructor
	List::~List()
	{
		
	}
	
	// Adds the item to the front of the list
	void List::push_front(int value_)
	{
		
	}
	
	// Adds the item to the end of the list
	void List::push_back(int value_)
	{
		
	}
	
	// removes the first item in the list
	int List::pop_front()
	{
		
	}
	
	// removes the last item in the list
	int List::pop_back()
	{
		
	}
	
	// removes the first node it finds with the user defined value
	void List::remove_node_by_value(int value_)
	{
		
	}
	
	// Inserts a new node in the lost. The node will be inserted at the user defined location and will have the user defined value
	void List::insert_node_at(int location_, int value_)
	{
		
	}
	
	// Overloaded assignment operator (=) for assigning one list to another
	List& List::operator=(const List &list_)
	{
		
	}
	
	// Overloaded addition operator (+) for adding two lists
	List List::operator+(const List &list_) const
	{
		
	}
	
	// Overloaded addition/assignment (+=) for adding to a list "in place"
	List& List::operator+=(const List &list_)
	{
		
	}
	
	// returns the number of items in the list
	int List::list_size() const
	{
		
	}
	
	// returns true if empty, else false
	bool List::empty() const
	{
		
	}
	
	// clears the list from all nodes
	void List::clear()
	{
		
	}
	
	// Output operator for printing lists (<<)
	friend std::ostream & operator<<(std::ostream & os_, const List &list_)
	{
		
	}
	
    int List::created_list_count()
    {
        return list_count;
    }

    int List::alive_node_count()
    {
        return Node::nodes_alive;
    }
	
	// constructor
	List::Node::Node(int);
    
	// Destructor
	List::Node::~Node()
	{
		
	}
	
    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    // public methods


    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    // private methods
    List::Node *List::new_node(int data) const
    {
        // Make sure we have room
        Node *node = new Node(data); // create the node
        return node;
    }


    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////
    // non-members

    /////////////////////////////////////////////////////////////////////////
    // Function: operator<<
    //  Purpose: Output the list into an ostream object
    //   Inputs: os - ostream object
    //           list - the List to output
    //  Outputs: Returns an ostream object.
    /////////////////////////////////////////////////////////////////////////
    std::ostream & operator<<(std::ostream & os_, const List &list_)
    {
        // Start at the top
        List::Node *pnode = list_.head;

        // Print each item
        while (pnode != 0)
        {
            os_ << std::setw(4) << pnode->data;
            pnode = pnode->next;
        }
        os_ << std::endl;
        return os_;
    }

} //namespace CS175
