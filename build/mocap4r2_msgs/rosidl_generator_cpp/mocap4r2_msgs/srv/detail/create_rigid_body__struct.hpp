// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_msgs:srv/CreateRigidBody.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/srv/create_rigid_body.hpp"


#ifndef MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_HPP_
#define MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Request __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Request __declspec(deprecated)
#endif

namespace mocap4r2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CreateRigidBody_Request_
{
  using Type = CreateRigidBody_Request_<ContainerAllocator>;

  explicit CreateRigidBody_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rigid_body_name = "";
      this->link_parent = "";
    }
  }

  explicit CreateRigidBody_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rigid_body_name(_alloc),
    link_parent(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rigid_body_name = "";
      this->link_parent = "";
    }
  }

  // field types and members
  using _rigid_body_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rigid_body_name_type rigid_body_name;
  using _link_parent_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_parent_type link_parent;
  using _markers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__rigid_body_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rigid_body_name = _arg;
    return *this;
  }
  Type & set__link_parent(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_parent = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Request
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Request
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CreateRigidBody_Request_ & other) const
  {
    if (this->rigid_body_name != other.rigid_body_name) {
      return false;
    }
    if (this->link_parent != other.link_parent) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const CreateRigidBody_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CreateRigidBody_Request_

// alias to use template instance with default allocator
using CreateRigidBody_Request =
  mocap4r2_msgs::srv::CreateRigidBody_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_msgs


#ifndef _WIN32
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Response __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Response __declspec(deprecated)
#endif

namespace mocap4r2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CreateRigidBody_Response_
{
  using Type = CreateRigidBody_Response_<ContainerAllocator>;

  explicit CreateRigidBody_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CreateRigidBody_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Response
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Response
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CreateRigidBody_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CreateRigidBody_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CreateRigidBody_Response_

// alias to use template instance with default allocator
using CreateRigidBody_Response =
  mocap4r2_msgs::srv::CreateRigidBody_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Event __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Event __declspec(deprecated)
#endif

namespace mocap4r2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CreateRigidBody_Event_
{
  using Type = CreateRigidBody_Event_<ContainerAllocator>;

  explicit CreateRigidBody_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CreateRigidBody_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mocap4r2_msgs::srv::CreateRigidBody_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mocap4r2_msgs::srv::CreateRigidBody_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Event
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_msgs__srv__CreateRigidBody_Event
    std::shared_ptr<mocap4r2_msgs::srv::CreateRigidBody_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CreateRigidBody_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CreateRigidBody_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CreateRigidBody_Event_

// alias to use template instance with default allocator
using CreateRigidBody_Event =
  mocap4r2_msgs::srv::CreateRigidBody_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mocap4r2_msgs

namespace mocap4r2_msgs
{

namespace srv
{

struct CreateRigidBody
{
  using Request = mocap4r2_msgs::srv::CreateRigidBody_Request;
  using Response = mocap4r2_msgs::srv::CreateRigidBody_Response;
  using Event = mocap4r2_msgs::srv::CreateRigidBody_Event;
};

}  // namespace srv

}  // namespace mocap4r2_msgs

#endif  // MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_HPP_
