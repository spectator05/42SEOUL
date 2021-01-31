<template>
    <div class="recentList">
      <p/>
      <h3><b>{{title}}</b></h3>
      <p/>
      <div class="wrap">
        <button type="button" border=0>
            <img width="100px" src="../assets/logo.png"/>
        </button>
        <img src="../assets/logo.png"/>
        <img src="../assets/logo.png"/>
        <img src="../assets/logo.png"/>
        <img src="../assets/logo.png"/>
        <img src="../assets/logo.png"/>
      </div>
      <p/>
      <ul class ="booklist">
        <li>✔ 이 책을 마지막으로 읽은 사람은 {{recent}}님이에요.</li>
        <li>✔ 이 책의 기부자는 {{donate}}님이에요.</li>
        <li>✔ 지금 반납하면 {{status}} 반납하는거에요.</li>
      </ul>
    </div>
</template>

<script>
export default {
  props: {
    title: {
      type: String,
      default: '최근 책 상태 사진'
    },
    recent: {
      type: String,
      default: 'recent'
    },
    donate: {
      type: String,
      default: 'donate'
    },
    status: {
      type: String,
      default: 'status'
    }
  },
  data () {
    return {
    }
  }
}
</script>

<style scoped>
  .recentList {
  padding: 1rem 1.6rem;
  }
  .booklist{
      list-style-type: none;
      font-weight: bold;
  }
  .wrap{
    width:100%;
    height:100%;
    white-space:nowrap;
    overflow-x:auto;
  }
  .wrap img {
    width: 200px;
  }
  .wrap button {
    border-radius: 1vw;
    border-color: gray;
    border:0;
  }
  .wrap button:hover {
    background-color: gray;
  }
</style>
