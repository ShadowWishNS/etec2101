#pragma once

namespace ssuds
{
	template <class T>
	class ArrayList
	{
	private:
		T* my_array;
		unsigned int my_array_size;
		unsigned int my_array_capacity;

	public:
		ArrayList()
		{
			// Option1: allocate the array to some small size
			my_array_capacity = 5;
			my_array = new T[my_array_capacity];
			my_array_size = 0;

			// Option2: don't allocate the array just yet -- wait until first
			// append/insert/prepend
			my_array_capacity = 0;
			my_array_size = 0;
			my_array = nullptr;
		}

		~ArrayList()
		{
			delete[] my_array;
		}

		T& at(unsigned int index)
		{
			if (index >= my_array_size)
			{
				throw std::out_of_range("Index out of range.");
			}
			return my_array[index];
		}

		unsigned int size() const
		{
			return my_array_size;
		}

		unsigned int capacity() const
		{
			return my_array_capacity;
		}

		void append(const T& new_value)
		{
			// This *might* make the array bigger....
			// IF the size == capacity, do the "Grow" operation
			//     Make a new temporary array (double our current capacity)
			//     Copy over data from current array to the new one
			//     Free up the old one
			//     Make my_array point to the bigger array
			//     Double capacity value.
			// If size < capacity, just do this
			my_array[my_array_size] = new_value;
			my_array_size++;
		}

		void prepend(T new_value)
		{
			if (my_array_size == my_array_capacity)
			{
				unsigned int new_capacity;
				if (my_array_capacity == 0)
				{
					new_capacity = 5;
				}
				else
				{
					new_capacity = my_array_capacity * 2;
				}
				T* new_array = new T[new_capacity];

				for (unsigned int i = 0; i < my_array_size; i++)
				{
					new_array[i + 1] = my_array[i];
				}

				delete[] my_array;
				my_array = new_array;
				my_array_capacity = new_capacity;
			}
			else
			{
				for (unsigned int i = my_array_size; i > 0; i--)
				{
					my_array[i] = my_array[i - 1];
				}
			}

			my_array[0] = new_value;
			my_array_size++;
		}



		void remove(unsigned int id)
		{
			if (id >= my_array_size)
			{
				return; // out of array end
			}

			for (unsigned int i = id; i < my_array_size - 1; i++)
			{
				my_array[i] = my_array[i + 1];
			}

			my_array_size--;

		}


		//int find(const T& search_value)
		//{
			// We want to return the index where search_value first occurs, or -1 if it's not found
		//}

		int find(const T& search_value, unsigned int start_index = 0)
		{
			// Starting at start_index, do the search above
		}


		// ostream is the base class for all output-based streams (cout, ofstream)
		void output(std::ostream& os)
		{
			os << "[";
			// Some kind of loop
			os << "]";
		}

	};
}